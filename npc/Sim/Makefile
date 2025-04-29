CXX = g++
VERILATOR_ROOT ?= /usr/share/verilator

# 包含路径
CPPFLAGS = -I$(VERILATOR_ROOT)/include \
           -I$(VERILATOR_ROOT)/include/vltstd \
           -I./verilator_model \
           -I./include \
           -I./

# 源文件 - 添加mem.cpp
SRC_FILES = $(wildcard ./*.cpp)

# Verilator 源文件
VERILATED_SRCS = $(VERILATOR_ROOT)/include/verilated.cpp \
                 $(VERILATOR_ROOT)/include/verilated_threads.cpp \
                 $(VERILATOR_ROOT)/include/verilated_vcd_c.cpp \
                 $(VERILATOR_ROOT)/include/verilated_dpi.cpp

# 需要链接生成的Verilator模型
VERILATOR_MODEL = verilator_model/VCPU__ALL.a

# 目标文件
OBJECTS = $(SRC_FILES:.cpp=.o)

main: $(OBJECTS)
	$(CXX) $(CPPFLAGS) $(OBJECTS) $(VERILATED_SRCS) $(VERILATOR_MODEL) -o $@ -lpthread -g

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

run: main
	./main

clean:
	rm -f main *.o