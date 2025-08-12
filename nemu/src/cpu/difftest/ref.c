
#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#define NR_GPR MUXDEF(CONFIG_RVE, 16, 32)
struct diff_context_t {
  word_t gpr[MUXDEF(CONFIG_RVE, 16, 32)];
  word_t pc;
};

//DIFFTEST_TO_DUT 0 DIFFTEST_TO_REF 1
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  void *nemu_buf = (void *)guest_to_host(addr);
  if(direction == DIFFTEST_TO_REF)  //dut -> ref (buf -> addr(nemu_buf))
    memcpy(nemu_buf , buf , n);
  else                              //ref -> dut (addr(nemu_buf) -> buf)
    memcpy(buf , nemu_buf, n);
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  int i = 0;
  struct diff_context_t *dut_state = (struct diff_context_t *)dut;
  if(direction == DIFFTEST_TO_REF){
    for(i = 0;i < NR_GPR ; i++){
      cpu.gpr[i] = dut_state -> gpr[i];
    }
  }
  else{
    for(i = 0;i < NR_GPR ; i++){
      dut_state -> gpr[i] = cpu.gpr[i];
      dut_state -> pc = cpu.pc;
    }
  }

}

__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT bool difftest_checkmem(paddr_t addr, int len, word_t dut_data, bool is_write) {
  if (is_write) {
    // 写操作：比较DUT写入的数据和REF中该地址的数据
    word_t ref_data = paddr_read(addr, len);
    return ref_data == dut_data;
  } else {
    // 读操作：比较DUT读到的数据和REF读到的数据
    word_t ref_data = paddr_read(addr, len);
    return ref_data == dut_data;
  }
}
__EXPORT bool difftest_skip() {
  extern bool skip;
  bool skip_temp = skip;
  skip = false;
  return skip_temp;
}
__EXPORT void difftest_init() {
  void init_mem();

  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}