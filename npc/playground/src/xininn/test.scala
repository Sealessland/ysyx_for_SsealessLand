package xininn

// 1. 导入 chiseltest 和 scalatest 库
import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

// 2. 导入 rocket-chip 中的 Arbiter 模块
//    您可以尝试按住 Ctrl (或 Cmd) 并点击下面的 "Arbiter" 来测试跳转功能
import freechips.rocketchip.util.Arbiter

/**
 * 一个测试套件，用于验证对 rocket-chip 模块的引用和跳转。
 * 它继承自 AnyFlatSpec 和 ChiselScalatestTester。
 */
class RocketChipImportTest extends AnyFlatSpec with ChiselScalatestTester {

  // 描述一个测试用例
  "Arbiter from Rocket Chip" should "grant access to the first valid request" in {
    // test(...) 是 chiseltest 的入口
    // 在这里实例化 rocket-chip 的 Arbiter 模块
    // 我们创建一个 2 输入的 Arbiter，每个输入的数据宽度为 8 bits
    test(new Arbiter(UInt(8.W), 2)) { dut =>
      // --- 测试场景 1: 只有第二个输入有效 ---
      println("Testing: Input 1 is valid, Input 0 is not.")

      // 驱动输入端口
      dut.io.in(0).valid.poke(false.B) // 第一个输入无效
      dut.io.in(1).valid.poke(true.B)  // 第二个输入有效
      dut.io.in(1).bits.poke(123.U(8.W)) // 设置第二个输入的数据

      dut.io.out.ready.poke(true.B) // 消费者已准备好接收数据

      // 检查输出
      dut.io.out.valid.expect(true.B) // 输出应该是有效的
      dut.io.out.bits.expect(123.U)   // 输出数据应该来自第二个输入
      dut.io.chosen.expect(1.U)       // 仲裁器应该选择了第二个输入 (index 1)

      dut.clock.step(1) // 前进一个时钟周期

      // --- 测试场景 2: 两个输入都有效 ---
      println("Testing: Both inputs are valid.")
      dut.io.in(0).valid.poke(true.B)
      dut.io.in(0).bits.poke(99.U(8.W))
      dut.io.in(1).valid.poke(true.B)
      dut.io.in(1).bits.poke(123.U(8.W))

      // 检查输出
      // Arbiter 默认会优先选择索引号最小的有效输入
      dut.io.out.bits.expect(99.U)
      dut.io.chosen.expect(0.U)
    }
  }
}