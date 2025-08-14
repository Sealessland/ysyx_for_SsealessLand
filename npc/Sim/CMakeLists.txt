cmake_minimum_required(VERSION 3.16)
project(NPC_Simulator CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 启用并行构建
set(CMAKE_BUILD_PARALLEL_LEVEL 8)
include(ProcessorCount)
ProcessorCount(N)
if(NOT N EQUAL 0)
    set(CMAKE_BUILD_PARALLEL_LEVEL ${N})
endif()

# 设置构建类型
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# 条件编译选项 - 可通过 cmake -DDIFFTEST=1 等方式设置
option(DIFFTEST "Enable differential testing" OFF)
option(MTRACE "Enable memory tracing" OFF)
option(ITRACE "Enable instruction tracing" OFF)
option(CORE "Enable core functionality" ON)

# 设置 Verilator 根目录
set(VERILATOR_ROOT "/usr/share/verilator/" CACHE PATH "Verilator installation directory")

# 查找必要的库
find_package(Threads REQUIRED)
find_package(PkgConfig REQUIRED)

# 查找 readline 库
find_library(READLINE_LIBRARY readline)
if(NOT READLINE_LIBRARY)
    message(FATAL_ERROR "readline library not found")
endif()

# 查找 capstone 库
find_library(CAPSTONE_LIBRARY capstone)
if(NOT CAPSTONE_LIBRARY)
    message(FATAL_ERROR "capstone library not found")
endif()

# 设置包含目录
set(INCLUDE_DIRS
    ${VERILATOR_ROOT}/include
    ${VERILATOR_ROOT}/include/vltstd
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/v_model
    ${CMAKE_CURRENT_SOURCE_DIR}/SoC_model
)

# 收集源文件
file(GLOB_RECURSE SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Verilator 源文件
set(VERILATED_SRCS
    ${VERILATOR_ROOT}/include/verilated.cpp
    ${VERILATOR_ROOT}/include/verilated_threads.cpp
    ${VERILATOR_ROOT}/include/verilated_vcd_c.cpp
    ${VERILATOR_ROOT}/include/verilated_dpi.cpp
)

# Verilator 模型库
set(VERILATOR_MODELS
    ${CMAKE_CURRENT_SOURCE_DIR}/v_model/Vcore__ALL.a
    ${CMAKE_CURRENT_SOURCE_DIR}/SoC_model/VysyxSoCFull__ALL.a
)

# 创建主执行文件
add_executable(main ${SRC_FILES} ${VERILATED_SRCS})

# 设置包含目录
target_include_directories(main PRIVATE ${INCLUDE_DIRS})

# 设置编译器标志
target_compile_options(main PRIVATE -g -Wall)

# 设置预处理器宏定义
if(CORE)
    target_compile_definitions(main PRIVATE CORE)
endif()

if(DIFFTEST)
    target_compile_definitions(main PRIVATE DIFFTEST)
endif()

if(MTRACE)
    target_compile_definitions(main PRIVATE MTRACE)
endif()

if(ITRACE)
    target_compile_definitions(main PRIVATE ITRACE)
endif()

# 链接库
target_link_libraries(main 
    PRIVATE 
    ${VERILATOR_MODELS}
    Threads::Threads
    ${READLINE_LIBRARY}
    ${CAPSTONE_LIBRARY}
)

# 设置链接器标志
target_link_options(main PRIVATE -g)

# 定义路径变量
set(NEMU_DIFF_SO "/home/sealessland/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so")
set(TEST_BIN "/home/sealessland/ysyx-workbench/npc/Sim/a/rtthread-riscv32-nemu.bin")
set(ASAN_LIB "/usr/lib64/libasan.so.8")

# Git commit 函数 - 模拟 Makefile 中的 git_commit 功能
function(git_commit_command message)
    find_program(GIT_EXECUTABLE git)
    if(GIT_EXECUTABLE)
        execute_process(
            COMMAND ${GIT_EXECUTABLE} add .
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/../..
            OUTPUT_QUIET ERROR_QUIET
        )
        execute_process(
            COMMAND ${GIT_EXECUTABLE} commit -m "${message}" --allow-empty
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/../..
            OUTPUT_QUIET ERROR_QUIET
        )
    endif()
endfunction()

# 信息显示目标
add_custom_target(info
    COMMAND ${CMAKE_COMMAND} -E echo "编译配置："
    COMMAND ${CMAKE_COMMAND} -E echo "DIFFTEST=${DIFFTEST} (${DIFFTEST})"
    COMMAND ${CMAKE_COMMAND} -E echo "MTRACE=${MTRACE} (${MTRACE})"
    COMMAND ${CMAKE_COMMAND} -E echo "ITRACE=${ITRACE} (${ITRACE})"
    COMMAND ${CMAKE_COMMAND} -E echo "CORE=${CORE} (${CORE})"
    COMMAND ${CMAKE_COMMAND} -E echo "CMAKE_CXX_FLAGS=${CMAKE_CXX_FLAGS}"
    COMMAND ${CMAKE_COMMAND} -E echo "BUILD_TYPE=${CMAKE_BUILD_TYPE}"
    VERBATIM
)

# 运行目标 - 带差分测试
add_custom_target(run
    COMMAND ${CMAKE_COMMAND} -E echo "Running NPC simulator with difftest..."
    COMMAND ${CMAKE_COMMAND} -E env LD_PRELOAD=${ASAN_LIB} 
        $<TARGET_FILE:main> --diff ${NEMU_DIFF_SO} -m ${TEST_BIN}
    DEPENDS main
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
)

# 性能分析目标
add_custom_target(perf
    COMMAND ${CMAKE_COMMAND} -E echo "Running NPC simulator with perf..."
    COMMAND perf record ${CMAKE_COMMAND} -E env LD_PRELOAD=${ASAN_LIB} 
        $<TARGET_FILE:main> --diff ${NEMU_DIFF_SO} -m ${TEST_BIN}
    COMMAND perf report --stdio
    DEPENDS main
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
)

# 运行目标 - 无差分测试
add_custom_target(run_nodiff
    COMMAND ${CMAKE_COMMAND} -E echo "Running NPC simulator without difftest..."
    COMMAND ${CMAKE_COMMAND} -E env LD_PRELOAD=${ASAN_LIB} 
        $<TARGET_FILE:main> -m ${TEST_BIN}
    DEPENDS main
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
)

# 调试目标
add_custom_target(debug
    COMMAND ${CMAKE_COMMAND} -E echo "Starting GDB debug session..."
    COMMAND gdb $<TARGET_FILE:main>
    DEPENDS main
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
)

# Git commit 目标
add_custom_target(commit
    COMMAND ${CMAKE_COMMAND} -E echo "Committing changes..."
    VERBATIM
)

# 运行所有测试目标
add_custom_target(runall
    COMMAND ${CMAKE_COMMAND} -E echo "Running all tests..."
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_SOURCE_DIR}/run_all_tests.cmake
    DEPENDS main
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
)

# 创建测试运行脚本
file(WRITE ${CMAKE_CURRENT_SOURCE_DIR}/run_all_tests.cmake "
file(GLOB TEST_BINS \"${CMAKE_CURRENT_SOURCE_DIR}/TestBin/*-npc.bin\")
foreach(TEST_BIN \${TEST_BINS})
    message(\"====================================================\")
    message(\"Running test: \${TEST_BIN}\")
    message(\"====================================================\")
    execute_process(
        COMMAND \${CMAKE_COMMAND} -E env LD_PRELOAD=${ASAN_LIB} 
            ${CMAKE_CURRENT_BINARY_DIR}/main --diff ${NEMU_DIFF_SO} -nd -m \${TEST_BIN}
        RESULT_VARIABLE TEST_RESULT
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    )
    if(NOT TEST_RESULT EQUAL 0)
        message(FATAL_ERROR \"Test \${TEST_BIN} FAILED!\")
    endif()
endforeach()
message(\"All tests passed successfully!\")
")

# 清理目标 (CMake 自带，但可以自定义)
add_custom_target(distclean
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_CURRENT_BINARY_DIR}
    COMMAND ${CMAKE_COMMAND} -E echo "Deep clean completed"
    VERBATIM
)

# 重建目标
add_custom_target(rebuild
    COMMAND ${CMAKE_COMMAND} --build ${CMAKE_CURRENT_BINARY_DIR} --target clean
    COMMAND ${CMAKE_COMMAND} --build ${CMAKE_CURRENT_BINARY_DIR} --target main --parallel ${CMAKE_BUILD_PARALLEL_LEVEL}
    VERBATIM
)

# 帮助目标
add_custom_target(show_help
    COMMAND ${CMAKE_COMMAND} -E echo "======== NPC CMake 构建系统 ========"
    COMMAND ${CMAKE_COMMAND} -E echo "可用目标："
    COMMAND ${CMAKE_COMMAND} -E echo "  main        - 构建主程序"
    COMMAND ${CMAKE_COMMAND} -E echo "  info        - 显示编译配置信息"
    COMMAND ${CMAKE_COMMAND} -E echo "  run         - 运行仿真器（带差分测试）"
    COMMAND ${CMAKE_COMMAND} -E echo "  run_nodiff  - 运行仿真器（无差分测试）"
    COMMAND ${CMAKE_COMMAND} -E echo "  perf        - 性能分析运行"
    COMMAND ${CMAKE_COMMAND} -E echo "  debug       - 调试模式运行"
    COMMAND ${CMAKE_COMMAND} -E echo "  runall      - 运行所有测试"
    COMMAND ${CMAKE_COMMAND} -E echo "  rebuild     - 重新构建"
    COMMAND ${CMAKE_COMMAND} -E echo "  clean       - 清理构建文件"
    COMMAND ${CMAKE_COMMAND} -E echo "  distclean   - 深度清理"
    COMMAND ${CMAKE_COMMAND} -E echo "  show_help   - 显示此帮助信息"
    COMMAND ${CMAKE_COMMAND} -E echo ""
    COMMAND ${CMAKE_COMMAND} -E echo "编译选项："
    COMMAND ${CMAKE_COMMAND} -E echo "  -DDIFFTEST=ON/OFF  - 启用/禁用差分测试"
    COMMAND ${CMAKE_COMMAND} -E echo "  -DMITRACE=ON/OFF   - 启用/禁用内存跟踪"
    COMMAND ${CMAKE_COMMAND} -E echo "  -DITRACE=ON/OFF    - 启用/禁用指令跟踪"
    COMMAND ${CMAKE_COMMAND} -E echo "  -DCORE=ON/OFF      - 启用/禁用核心功能"
    COMMAND ${CMAKE_COMMAND} -E echo ""
    COMMAND ${CMAKE_COMMAND} -E echo "示例用法："
    COMMAND ${CMAKE_COMMAND} -E echo "  cmake -DDIFFTEST=ON -DCMAKE_BUILD_TYPE=Release .."
    COMMAND ${CMAKE_COMMAND} -E echo "  cmake --build . --target run --parallel"
    VERBATIM
)

# 设置默认目标 - 使用不冲突的名称
add_custom_target(build_all DEPENDS main info)

# 输出构建信息
message(STATUS "NPC Simulator CMake Configuration:")
message(STATUS "  Build Type: ${CMAKE_BUILD_TYPE}")
message(STATUS "  Parallel Jobs: ${CMAKE_BUILD_PARALLEL_LEVEL}")
message(STATUS "  DIFFTEST: ${DIFFTEST}")
message(STATUS "  MTRACE: ${MTRACE}")
message(STATUS "  ITRACE: ${ITRACE}")
message(STATUS "  CORE: ${CORE}")
message(STATUS "  Verilator Root: ${VERILATOR_ROOT}")