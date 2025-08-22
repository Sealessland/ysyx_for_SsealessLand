#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
	if (user_handler) {
		Event ev = {0};
		switch (c->mcause) {
			case MCAUSE_ECALL_U:
			case MCAUSE_ECALL_S:
			case MCAUSE_ECALL_M:
				ev.event = EVENT_YIELD;
				c->mepc += 4;
				break;
			case MCAUSE_IRQ_TIMER_S:
			case MCAUSE_IRQ_TIMER_M:
				ev.event = EVENT_IRQ_TIMER;
				break;
			default: ev.event = EVENT_ERROR; break;
		}
		c = user_handler(ev, c);
		assert(c != NULL);
  	}
	return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
	// initialize exception entry
	asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));
	// [hululu.PA3]: initialize mstatus for difftest (rv32)
	uint32_t mstatus_value = 0x21800;
	asm volatile("csrw mstatus, %0" : : "r"(mstatus_value));

	// register event handler
	user_handler = handler;

	return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
	Context *c = (Context *)((uintptr_t)kstack.end - sizeof(Context));
	c->mepc = (uintptr_t)entry;
	c->mstatus = 0x21800; // [hululu.PA3]: initialize mstatus for difftest (rv32)
	c->gpr[REG_A0] = (uintptr_t)arg;
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
