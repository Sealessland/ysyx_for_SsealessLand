# Makefile for CPU Simulator

# Build configuration
DEBUG ?= 0
VERBOSE ?= 0

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++14 -Wall -I./tb/include -I./verilator_model
# Add Verilator include paths
CXXFLAGS += -I/usr/share/verilator/include -I/usr/local/share/verilator/include
# Add path to svdpi.h (typically in the same directory as verilated.h)
CXXFLAGS += -I/usr/share/verilator/include/vltstd -I/usr/local/share/verilator/include/vltstd
# Add Verilator libraries
VERILATOR_ROOT ?= /usr/share/verilator
LDFLAGS = -lm -lreadline

# Add debug flags if DEBUG is enabled
ifeq ($(DEBUG), 1)
    CXXFLAGS += -g -O0 -DDEBUG
else
    CXXFLAGS += -O2
endif

# Add verbose output if VERBOSE is enabled
ifeq ($(VERBOSE), 1)
    V :=
else
    V := @
endif

# Verilator flags
VERILATOR_FLAGS = -CFLAGS "$(CXXFLAGS)"

# Source files
SRC_DIRS = tb/CircuitSim tb/memory tb/monitor tb/monitor/sdb tb/utils
SRCS = $(wildcard tb/*.cpp) \
       $(wildcard tb/CircuitSim/*.cpp) \
       $(wildcard tb/CircuitSim/difftest/*.cpp) \
       $(wildcard tb/memory/*.cpp) \
       $(wildcard tb/monitor/*.cpp) \
       $(wildcard tb/monitor/sdb/*.cpp) \
       $(filter-out tb/utils/disasm_stub.cpp, $(wildcard tb/utils/*.cpp)) \
       tb/utils/disasm_stub.cpp

# Exclude disasm.cc as it requires LLVM development libraries
# $(wildcard tb/utils/*.cc)

# Object files
OBJS = $(SRCS:.cpp=.o)
OBJS := $(OBJS:.cc=.o)

# Dependency files
DEPS = $(OBJS:.o=.d)

# Verilator model files
VERILATOR_SRCS = $(wildcard verilator_model/*.cpp)
VERILATOR_OBJS = $(VERILATOR_SRCS:.cpp=.o)

# Verilator library files
VERILATOR_ROOT ?= /usr/share/verilator
VERILATOR_LIB_DIR = verilator_lib
VERILATOR_LIB_SRCS = $(VERILATOR_LIB_DIR)/verilated.cpp \
                     $(VERILATOR_LIB_DIR)/verilated_vcd_c.cpp \
                     $(VERILATOR_LIB_DIR)/verilated_threads.cpp
VERILATOR_LIB_OBJS = $(VERILATOR_LIB_SRCS:.cpp=.o)

# Target executable
TARGET = npc

# Default target
all: $(TARGET)

# Build the target executable
$(TARGET): $(OBJS) verilator_model verilator_libs
	@echo "Linking $@..."
	$(V)$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(VERILATOR_OBJS) $(VERILATOR_LIB_OBJS) $(LDFLAGS)
	@echo "Build complete: $@"

# Compile Verilator model files
verilator_model: $(VERILATOR_OBJS)
	@echo "Verilator model files compiled."

# Prepare Verilator library files
$(VERILATOR_LIB_DIR):
	@echo "Creating Verilator library directory..."
	$(V)mkdir -p $(VERILATOR_LIB_DIR)

$(VERILATOR_LIB_DIR)/verilated.cpp: | $(VERILATOR_LIB_DIR)
	@echo "Copying Verilator library files..."
	$(V)cp $(VERILATOR_ROOT)/include/verilated.cpp $(VERILATOR_LIB_DIR)/
	$(V)cp $(VERILATOR_ROOT)/include/verilated_vcd_c.cpp $(VERILATOR_LIB_DIR)/
	$(V)cp $(VERILATOR_ROOT)/include/verilated.h $(VERILATOR_LIB_DIR)/
	$(V)cp $(VERILATOR_ROOT)/include/verilated_vcd_c.h $(VERILATOR_LIB_DIR)/
	$(V)cp $(VERILATOR_ROOT)/include/verilated_threads.h $(VERILATOR_LIB_DIR)/

# Compile Verilator library files
$(VERILATOR_LIB_DIR)/%.o: $(VERILATOR_LIB_DIR)/%.cpp
	@echo "Compiling $<..."
	$(V)$(CXX) $(CXXFLAGS) -MMD -MP -c -o $@ $<

verilator_libs: $(VERILATOR_LIB_DIR)/verilated.cpp $(VERILATOR_LIB_OBJS)
	@echo "Verilator library files compiled."

# Compile C++ source files
%.o: %.cpp
	@echo "Compiling $<..."
	$(V)$(CXX) $(CXXFLAGS) -MMD -MP -c -o $@ $<

# Compile C++ source files with .cc extension
%.o: %.cc
	@echo "Compiling $<..."
	$(V)$(CXX) $(CXXFLAGS) -MMD -MP -c -o $@ $<

# Include dependency files
-include $(DEPS)

# Run target
run: $(TARGET)
	@echo "Running $(TARGET)..."
	$(V)./$(TARGET)

# Clean target
clean:
	@echo "Cleaning object files and executable..."
	$(V)rm -f $(OBJS) $(DEPS) $(TARGET)

# Clean all target (including Verilator generated files)
cleanall: clean
	@echo "Cleaning Verilator generated files..."
	$(V)rm -f verilator_model/*.o

# Help target
help:
	@echo "CPU Simulator Makefile"
	@echo "Usage:"
	@echo "  make [target] [DEBUG=0/1] [VERBOSE=0/1]"
	@echo ""
	@echo "Targets:"
	@echo "  all       - Build the simulator (default)"
	@echo "  run       - Build and run the simulator"
	@echo "  clean     - Remove object files and executable"
	@echo "  cleanall  - Remove all generated files including Verilator files"
	@echo "  help      - Display this help message"
	@echo ""
	@echo "Options:"
	@echo "  DEBUG=1   - Build with debug information"
	@echo "  VERBOSE=1 - Show detailed build commands"

# Phony targets
.PHONY: all run clean cleanall help
