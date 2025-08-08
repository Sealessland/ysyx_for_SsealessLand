#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    

    
    switch (c->mcause) {
      case 0xb:       // 正确的 ECALL_FROM_M_MODE 值
      case 0x1:       // NEMU的错误值
        ev.event = EVENT_YIELD;
        ev.cause = c->mcause;  // 保存原始mcause值
        ev.ref = c->mepc;      // 保存触发地址
        ev.msg = "由用户程序主动让出处理器";
        c->mepc += 4; 
        break;
      default: 
        ev.event = EVENT_ERROR; 
        ev.cause = c->mcause;
        ev.ref = c->mepc;
        ev.msg = "未知的中断/异常类型";
        break;
    }
    
    // 打印 Event 的完整信息
    printf("\n========== Event 详细信息（设置后）==========\n");
    printf("事件类型(ev.event): %d\n", ev.event);
    printf("事件名称: %s\n", 
           ev.event == EVENT_NULL ? "EVENT_NULL" :
           ev.event == EVENT_YIELD ? "EVENT_YIELD" :
           ev.event == EVENT_SYSCALL ? "EVENT_SYSCALL" :
           ev.event == EVENT_PAGEFAULT ? "EVENT_PAGEFAULT" :
           ev.event == EVENT_ERROR ? "EVENT_ERROR" :
           ev.event == EVENT_IRQ_TIMER ? "EVENT_IRQ_TIMER" :
           ev.event == EVENT_IRQ_IODEV ? "EVENT_IRQ_IODEV" : "未知事件");
    printf("ev.cause: 0x%lx\n", ev.cause);
    printf("ev.ref: 0x%lx\n", ev.ref);
    printf("ev.msg: %s\n", ev.msg ? ev.msg : "(null)");
        printf("\n------- 触发事件的原始信息 -------\n");
    printf("mcause: 0x%lx\n", c->mcause);
    printf("mepc: 0x%lx\n", c->mepc);
    printf("mstatus: 0x%lx\n", c->mstatus);
    
    printf("\n------- 上下文信息 -------\n");
    printf("上下文地址: %p\n", c);
    printf("指令集模式: %s\n", 
           (c->mstatus & (3 << 11)) == (3 << 11) ? "M-Mode" :
           (c->mstatus & (1 << 11)) == (1 << 11) ? "S-Mode" : "U-Mode");
    
    printf("=====================================\n\n");

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *c = (Context *)kstack.end - sizeof(Context);
  memset(c, 0, sizeof(Context));
  c->mepc = (uintptr_t)entry;
  c->gpr[10] = (uintptr_t)arg; // a0
  c->mstatus = 0x21800; 
  return c;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}