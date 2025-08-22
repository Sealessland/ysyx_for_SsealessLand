
// A SystemVerilog module to call a DPI-C function on every instruction commit.
module InstCnt(
    input clock,
    input en,
    input [31:0] inst
);



  // 2. 修正 DPI 导入：方向为 'input'，因为数据从 SV 流向 C
  import "DPI-C" function void inst_counter(input int inst);
  // 3. 在时钟边沿触发的单个 always 块
  always @(posedge clock) begin
    if (en) begin
      inst_counter(inst);
    end
  end

endmodule
    