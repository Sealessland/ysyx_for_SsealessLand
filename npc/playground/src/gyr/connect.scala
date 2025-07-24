// 声明包名，这是一种代码组织方式，类似于文件夹结构。
// 所有在这个文件里定义的类和对象都属于"gyr"这个包。
package gyr

// 导入Chisel3的核心库。"_"是通配符，表示导入chisel3包下的所有内容。
// 这是编写任何Chisel代码都必需的。
import chisel3._
// 导入Chisel3的工具库，其中包含了像DecoupledIO、Queue等高级、可复用的组件。
import chisel3.util._

/**
 * 定义一个名为Transaction的单例对象(object)。
 * 它不是一个具体的硬件模块(Module)，而是一个工具集或辅助函数库。
 * 我们可以把一些通用的、用于生成特定电路模式的函数放在这里。
 */
object Transaction {
  /**
   * 定义一个名为pipelined的核心方法，用于生成一个单级流水线处理逻辑。
   * 这个方法是“泛型”的，意味着它可以处理任何类型的输入输出数据。
   *
   * @tparam T_IN 输入数据的Chisel类型。"<: Data"约束了它必须是Chisel的硬件数据类型（如UInt, Bundle等）。
   * @tparam T_OUT 输出数据的Chisel类型。同样，它也必须是Chisel的硬件数据类型。
   *
   * @param in 输入端口。它是一个DecoupledIO，即一个标准的“两相握手”接口，包含valid, ready, bits信号。
   * @param out 输出端口。同样是一个DecoupledIO接口。
   * @param logic 一个“函数参数”，这是本设计的精髓。调用者需要提供一个函数，
   * 该函数描述了如何根据输入数据(T_IN)计算出输出数据(T_OUT)。
   * 这个函数本身会被综合成组合逻辑电路。
   * @param sideEffect 另一个函数参数，用于定义伴随数据处理发生的“副作用”，比如写内存、更新状态寄存器等。
   * 它的返回类型是Unit（相当于void），表示它不产生输出，只执行操作。
   * 它有一个默认值 `(_: T_IN) => ()`，这是一个什么都不做的空函数，使得这个参数成为可选的。
   *
   * @return Unit 该方法本身不返回任何值，它的作用是在调用它的地方生成一系列的硬件电路连接。
   */def pipelined[T_IN <: Data, T_OUT <: Data](
                                              in: DecoupledIO[T_IN],
                                              out: DecoupledIO[T_OUT],
                                              logic: T_IN => T_OUT,
                                              sideEffect: T_IN => Unit = (_: T_IN) => ()
                                            ): Unit = {

    // --- 方法内部实现：生成一个完整的、带反压的单级流水线 ---

    // 创建一个寄存器，用于存放流水线处理后的数据结果。
    // 因为T_OUT是泛型，我们不能直接new一个实例。
    // `chiselTypeOf(out.bits)` 是Chisel提供的工具，它能获取`out.bits`的具体硬件类型，
    // 从而让Reg函数知道该创建一个什么样类型和位宽的寄存器。
    val out_bits_reg = Reg(chiselTypeOf(out.bits))

    // 创建一个寄存器，用于存放流水线阶段的有效位(valid)。
    // 使用RegInit进行初始化，并设定复位(reset)时的值为false.B (低电平)。
    // 这个寄存器标志着`out_bits_reg`中的数据是否有效。
    val out_valid_reg = RegInit(false.B)

    // --- 将内部寄存器连接到模块的输出端口 ---

    // 将流水线有效位寄存器的值连接到输出端口的valid信号。
    // ":=" 是Chisel的连接操作符，表示硬件上的物理连线。
    out.valid := out_valid_reg
    // 将流水线数据寄存器的值连接到输出端口的bits信号（数据总线）。
    out.bits := out_bits_reg

    // --- 实现反压（Back-pressure）逻辑 ---

    // 这是整个流水线控制的核心。决定了输入端口何时处于“准备就绪”状态。
    // in.ready为true的条件是下面两者之一：
    // 1. `!out_valid_reg`：我的流水线是空的（内部valid寄存器为低），所以我随时可以接收新数据。
    // 2. `out.ready`：我的流水线是满的（内部valid为高），但下游模块正好也准备好了（out.ready为高），
    //    这意味着我当前的数据在本周期就会被下游取走，流水线将在下一拍变空。
    //    所以，我也可以在当前周期接收新的数据。这是一种关键的性能优化，允许数据无缝流过。
    in.ready := !out_valid_reg || out.ready

    // --- 定义状态更新的条件逻辑 ---

    // `when` 是Chisel中描述条件电路的关键字。
    // `in.fire` 是一个便捷方法，等价于 `in.valid && in.ready`。
    // 它为true的时刻，表示一次成功的上游握手发生，一个新数据被接收。
    when(in.fire) {
      // 1. 调用用户传入的`logic`函数，对输入数据`in.bits`进行处理，
      //    并将计算结果连接到`out_bits_reg`的输入端。
      //    这个结果将在下一个时钟周期被锁存到寄存器中。
      out_bits_reg := logic(in.bits)

      // 2. 将`out_valid_reg`的输入置为true。
      //    这表示在下一个时钟周期，由于新数据被锁存，流水线将变为“有效”状态。
      out_valid_reg := true.B

      // 3. 执行用户传入的`sideEffect`函数，完成任何额外的操作。
      sideEffect(in.bits)
    }
      // `elsewhen` 只有在上面的`when`条件不满足时才会被检查。
      // `out.fire` 等价于 `out.valid && out.ready`。
      // 它为true的时刻，表示一次成功的下游握手发生，当前流水线中的数据被取走。
      .elsewhen(out.fire) {
        // 当数据被取走后，将`out_valid_reg`的输入置为false。
        // 这表示在下一个时钟周期，流水线将变回“空闲”状态，准备接收新任务。
        out_valid_reg := false.B
      }
    // 注意：如果in.fire和out.fire都不发生，那么两个寄存器`out_bits_reg`和`out_valid_reg`
    // 会保持它们当前的值不变，这是寄存器的基本行为。
  }
}