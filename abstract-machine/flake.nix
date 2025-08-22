# flake.nix
{
  description = "一个用于 RISC-V 64 交叉编译的开发环境";

  # 1. 定义输入，这里我们使用 nixpkgs 不稳定分支
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  # 2. 定义输出
  outputs = { self, nixpkgs }:
    let
      # 定义你正在使用的系统 (host)
      hostSystem = "x86_64-linux"; # 根据你的实际情况修改，例如 "aarch64-linux" 或 "x86_64-darwin"

      # 为你的 host 系统导入 nixpkgs
      pkgs = nixpkgs.legacyPackages.${hostSystem};

      # 定义你的目标系统 (target)
      targetSystem = "riscv64-linux";

      # 这就是关键：获取针对 riscv64-linux 的交叉编译包集合
      crossPkgs = pkgs.pkgsCross.${targetSystem};

    in
    {
      # 定义一个开发环境 (devShell)
      devShells.${hostSystem}.default = pkgs.mkShell {
        # 在这个环境中，我们引入交叉编译工具链
        buildInputs = [
          # 引入 riscv64-linux 的 C 编译器 (GCC)
          crossPkgs.stdenv.cc

          # 你也可以引入其他任何为 riscv64 交叉编译好的库
          # 例如，交叉编译版的 zlib 库
          # crossPkgs.zlib
        ];

        # 你可以在这里设置一些环境变量，让构建系统自动找到交叉编译器
        shellHook = ''
          echo "已进入 RISC-V 64 交叉编译环境！"
          echo "编译器 'riscv64-linux-gnu-gcc' 已在 PATH 中。"
          export CC="${crossPkgs.stdenv.cc}/bin/riscv64-linux-gnu-gcc"
        '';
      };

      # 你也可以用它来构建一个交叉编译的包
      packages.${hostSystem}.default = crossPkgs.hello;
    };
}

