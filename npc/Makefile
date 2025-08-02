BUILD_DIR = ./build
SIM_DIR = ./Sim

PRJ = playground

# 包含公共的 git_commit 函数
-include ../Makefile

filter:
	@echo "Filtering comments from Verilog files..."
	@find $(BUILD_DIR) -name "*.sv" -exec sed -i 's|//.*||' {} +
	@echo "Filtering complete."

test:
	mill -i $(PRJ).test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i $(PRJ).runMain Elaborate --target-dir $(BUILD_DIR)
	head -n -3 build/core.sv > build/core.sv.tmp && mv build/core.sv.tmp build/core.sv

help:
	mill -i $(PRJ).runMain Elaborate --help

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

bsp:
	mill -i mill.bsp.BSP/install

idea:
	mill -i mill.idea.GenIdea/idea

clean:
	-rm -rf $(BUILD_DIR)
	$(MAKE) -C $(SIM_DIR) clean

distclean: clean
	$(MAKE) -C $(SIM_DIR) distclean

# 生成 Verilator 模型
verilator-model: verilog
	$(call git_commit, "gen verilator model")
	@echo "生成 Verilator 模型..."
	@mkdir -p $(SIM_DIR)/v_model
	@verilator --cc --trace -Wall -Wno-UNOPTFLAT -Wno-fatal \
		--top-module core $(BUILD_DIR)/core.sv \
		--Mdir $(SIM_DIR)/v_model
	@echo "编译 Verilator 模型..."
	@$(MAKE) -C $(SIM_DIR)/v_model -f Vcore.mk
	@echo "Verilator 模型生成完成"
	@$(MAKE) -C AdaptSim/
# 构建仿真器
build-sim: verilator-model
	$(call git_commit, "build simulator")
	@echo "构建仿真器..."
	@$(MAKE) -C $(SIM_DIR) all
	@echo "仿真器构建完成"

# 完整的仿真流程
sim: build-sim
	$(call git_commit, "run npc sim")
	@echo "======== NPC 仿真器 ========"
	@echo "启动完整仿真流程..."
	@$(MAKE) -C $(SIM_DIR) run

# 无差分测试的仿真
sim-nodiff: build-sim
	$(call git_commit, "run npc sim without difftest")
	@echo "======== NPC 仿真器 (无差分测试) ========"
	@$(MAKE) -C $(SIM_DIR) run_nodiff

# 调试仿真器
debug-sim: build-sim
	$(call git_commit, "debug npc sim")
	@echo "======== 调试 NPC 仿真器 ========"
	@$(MAKE) -C $(SIM_DIR) debug

# 仿真器信息
sim-info:
	@$(MAKE) -C $(SIM_DIR) info

# 仿真器帮助
sim-help:
	@$(MAKE) -C $(SIM_DIR) help

# 快速重新构建和运行
rebuild-sim: clean sim

# 只重新构建仿真器（不重新生成 Verilog）
rebuild-sim-only:
	$(MAKE) -C $(SIM_DIR) rebuild

# 显示完整的帮助信息
help-all:
	@echo "======== NPC 项目构建系统 ========"
	@echo ""
	@echo "Chisel 开发目标:"
	@echo "  test          - 运行 Chisel 测试"
	@echo "  verilog       - 生成 Verilog 代码"
	@echo "  reformat      - 重新格式化 Scala 代码"
	@echo "  checkformat   - 检查代码格式"
	@echo "  help          - 显示 Chisel 帮助"
	@echo ""
	@echo "Verilator 和仿真目标:"
	@echo "  verilator-model    - 生成 Verilator 模型"
	@echo "  build-sim          - 构建仿真器"
	@echo "  sim                - 完整仿真流程 (推荐)"
	@echo "  sim-nodiff         - 无差分测试仿真"
	@echo "  debug-sim          - 调试仿真器"
	@echo "  sim-info           - 显示仿真器配置"
	@echo "  sim-help           - 显示仿真器帮助"
	@echo ""
	@echo "维护目标:"
	@echo "  clean              - 清理构建文件"
	@echo "  distclean          - 深度清理"
	@echo "  rebuild-sim        - 重新构建并运行仿真"
	@echo "  rebuild-sim-only   - 只重新构建仿真器"
	@echo "  help-all           - 显示此帮助信息"
	@echo ""
	@echo "开发工具:"
	@echo "  bsp                - 生成 BSP"
	@echo "  idea               - 生成 IntelliJ IDEA 项目"
	@echo ""
	@echo "常用工作流程:"
	@echo "  1. 修改 Chisel 代码"
	@echo "  2. make sim        # 自动生成 Verilog、构建仿真器并运行"
	@echo "  3. make debug-sim  # 如需调试"
	@echo ""
	@echo "配置选项 (在 Sim/ 目录中使用):"
	@echo "  DIFFTEST={0,1}     - 启用/禁用差分测试"
	@echo "  MTRACE={0,1}       - 启用/禁用内存跟踪"
	@echo "  ITRACE={0,1}       - 启用/禁用指令跟踪"
	@echo "================================="

# 兼容旧的 tor 目标
tor: verilator-model
	@echo "注意: 'tor' 目标已弃用，请使用 'verilator-model'"

.PHONY: test verilog help reformat checkformat clean distclean \
		verilator-model build-sim sim sim-nodiff debug-sim \
		sim-info sim-help rebuild-sim rebuild-sim-only help-all tor

