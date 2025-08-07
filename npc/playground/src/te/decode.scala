package te
import chisel3._
import chisel3.util._

// A bundle with a single 32-bit wire
class WideBundle extends Bundle {
  val data = UInt(32.W)
}

class BundleCompare extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(32.W))
    // Output as a vector of four 8-bit values
    val out_vec = Output(Vec(4, UInt(8.W)))
    // Output as a bundle with one 32-bit value
    val out_bundle = Output(new WideBundle)
  })

  // Connect the single 32-bit input to the 32-bit bundle output
  io.out_bundle.data := io.in

  // Reinterpret the 32-bit input as a Vec of four 8-bit signals.
  // This is a common and powerful Chisel pattern.
  // The least significant byte of 'in' goes to 'out_vec(0)'.
  io.out_vec := io.in.asTypeOf(io.out_vec)

  // To demonstrate accessing individual elements:
  // val first_byte = io.out_vec(0) // Accesses the first 8-bit element
  // val last_byte_from_bundle = io.out_bundle.data(31, 24) // Bit-slicing
}

// To generate Verilog for this module
// object Main extends App {
//   (new chisel3.stage.ChiselStage).emitVerilog(new BundleCompare)
// }