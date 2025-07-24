CXX = g++
VERILATOR_ROOT ?= /usr/share/verilator

# 创建构建目录
BUILD_DIR = build
-include ../../Makefile

# 条件编译选项
DIFFTEST ?= 1  # 默认启用差分测试
MTRACE ?= 1    # 默认禁用内存跟踪
#ITRACE ?= 0    # 默认禁用指令跟踪

# 初始化基础CPPFLAGS
CPPFLAGS = -I$(VERILATOR_ROOT)/include \
           -I$(VERILATOR_ROOT)/include/vltstd \
           -I./include \
           -I./\
           -I./v_model/

# 添加预处理器宏定义（这个部分有问题需要修复）
CFLAGS = -DDIFFTEST

CFLAGS +=


CFLAGS += -DITRACE

# 合并CFLAGS到CPPFLAGS
CPPFLAGS += $(CFLAGS)

# 以下内容保持不变...
SRC_FILES = $(wildcard ./*.cpp)
OBJECTS = $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(notdir $(SRC_FILES)))
VERILATED_SRCS = $(VERILATOR_ROOT)/include/verilated.cpp \
                 $(VERILATOR_ROOT)/include/verilated_threads.cpp \
                 $(VERILATOR_ROOT)/include/verilated_vcd_c.cpp \
                 $(VERILATOR_ROOT)/include/verilated_dpi.cpp
VERILATOR_MODEL = v_model/Vcore__ALL.a
LDFLAGS = -lpthread -lreadline -g
LDFLAGS += -lcapstone
IMG ?=

$(shell mkdir -p $(BUILD_DIR))

info:
	@echo "编译配置："
	@echo "DIFFTEST=$(DIFFTEST) ($(if $(filter 1,$(DIFFTEST)),启用,禁用))"
	@echo "MTRACE=$(MTRACE) ($(if $(filter 1,$(MTRACE)),启用,禁用))"
	@echo "ITRACE=$(ITRACE) ($(if $(filter 1,$(ITRACE)),启用,禁用))"
	@echo "CFLAGS=$(CFLAGS)"
	@echo "CPPFLAGS=$(CPPFLAGS)"

main: info $(OBJECTS)
	$(CXX) $(CPPFLAGS) $(OBJECTS) $(VERILATED_SRCS) $(VERILATOR_MODEL) -o $@ $(LDFLAGS) -g

$(BUILD_DIR)/%.o: %.cpp
	@echo "编译 $< 使用标志: $(CPPFLAGS)"
	$(CXX) $(CPPFLAGS) -c $< -o $@

run: main
	$(call git_commit, "run npc sim") # DO NOT REMOVE THIS LINE!!
	LD_PRELOAD=/usr/lib64/libasan.so.8 ./main --diff ../../nemu/build/riscv32-nemu-interpreter-so  -m #TestBin/crc32-riscv32e-npc.bin
run_nodiff: main
	$(call git_commit, "run npc sim without difftest") # DO NOT REMOVE THIS LINE!!
	LD_PRELOAD=/usr/lib64/libasan.so.8 ./main

clean:
	rm -f main
	rm -rf $(BUILD_DIR)

debug: main
	$(call git_commit, "debug npc sim") # DO NOT REMOVE THIS LINE!!
	gdb ./main