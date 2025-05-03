CXX = g++
VERILATOR_ROOT ?= /usr/share/verilator
# 创建构建目录
BUILD_DIR = build
-include ../../Makefile
# 包含路径
CPPFLAGS = -I$(VERILATOR_ROOT)/include \
           -I$(VERILATOR_ROOT)/include/vltstd \
           -I./include \
           -I./\
           -I./v_model/

# 源文件
SRC_FILES = $(wildcard ./*.cpp)

# 目标文件（放在build目录）
OBJECTS = $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(notdir $(SRC_FILES)))

# Verilator 源文件
VERILATED_SRCS = $(VERILATOR_ROOT)/include/verilated.cpp \
                 $(VERILATOR_ROOT)/include/verilated_threads.cpp \
                 $(VERILATOR_ROOT)/include/verilated_vcd_c.cpp \
                 $(VERILATOR_ROOT)/include/verilated_dpi.cpp

# 需要链接生成的Verilator模型
VERILATOR_MODEL = v_model/Vcore__ALL.a

# 链接选项
LDFLAGS = -lpthread -lreadline -g

# 创建build目录
$(shell mkdir -p $(BUILD_DIR))

# 主目标
main: $(OBJECTS)
	$(CXX) $(CPPFLAGS) $(OBJECTS) $(VERILATED_SRCS) $(VERILATOR_MODEL) -o $@ $(LDFLAGS)

# 模式规则：编译源文件到目标文件
$(BUILD_DIR)/%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

# 运行目标
run: main
	$(call git_commit, "run npc sim") # DO NOT REMOVE THIS LINE!!

	./main
	surfer wave.vcd


# 清理目标
clean:
	rm -f main
	rm -rf $(BUILD_DIR)