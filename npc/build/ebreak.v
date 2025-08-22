
module ebreak (
    input clock,
    input en
);

  import "DPI-C" function void ebreak_handler();

  always @(posedge clock) begin
    if (en) begin
      ebreak_handler();
    end
  end

endmodule
    