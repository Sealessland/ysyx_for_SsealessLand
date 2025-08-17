{
  description = "A development environment for the NPC_Simulator project";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
        # 根据你的 CMakeLists.txt 要求，我们使用 Clang 工具链
        stdenv = pkgs.clangStdenv;
        # 从 Nix 的 Clang 工具链中安全地获取 libasan.so 的路径
        asan_lib_path = "${stdenv.cc.cc.lib}/lib/libasan.so";
      in
      {
        devShells.default = pkgs.mkShell {
          name = "npc-simulator-shell";

          # 列出所有编译、运行和调试所需的软件包
          packages = with pkgs; [
            # 核心构建工具链
            clang_17  # 使用一个明确版本的 Clang 以保证稳定性
            cmake
            gdb
            pkg-config

            # 项目依赖的库
            readline
            capstone
            verilator

            # 自定义目标所需的工具
            perf-tools # 用于 'perf' 目标
          ];

          # 这是关键部分：当你进入 shell 时，它会提供配置指导
          shellHook = ''
            echo ""
            echo "--- 欢迎来到 NPC Simulator 的 Nix 开发环境 ---"
            echo ""
            echo "此环境已包含所有必需的依赖项。"
            echo "你的 CMakeLists.txt 包含一些需要被覆盖的硬编码路径。"
            echo ""
            echo "要首次配置项目以便 CLion 能够正确识别，请在项目根目录运行以下命令："
            echo ""
            # 使用 printf 以获得更清晰的多行输出
            printf "cmake -S . -B build \\\n"
            printf "  -DVERILATOR_ROOT='${pkgs.verilator}' \\\n"
            printf "  -DASAN_LIB='${asan_lib_path}' \\\n"
            printf "  -DNEMU_DIFF_SO='/path/to/your/nemu-interpreter.so' \\\n"
            printf "  -DTEST_BIN='/path/to/your/test.bin' \\\n"
            printf "  -DCMAKE_BUILD_TYPE=Debug\n"
            echo ""
            echo "注意：你必须将 NEMU_DIFF_SO 和 TEST_BIN 的路径替换为你自己工作台中的实际路径。"
            echo "配置完成后，你就可以正常使用 CLion 打开项目，或者通过 'cmake --build build' 命令来构建了。"
            echo "----------------------------------------------------"
            echo ""
          '';
        };
      }
    );
}
