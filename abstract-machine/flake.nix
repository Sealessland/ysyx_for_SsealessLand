# flake.nix (已修正)
{
  description = "一个用于 RISC-V 64 交叉编译的开发环境";

  # 1. 定义输入。建议使用 unstable 以获得最新的交叉编译支持
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-25.05";

  # 2. 定义输出
  outputs = { self, nixpkgs }:
    let
      # 定义你正在使用的系统 (host)
      # 这是一个常见的 host，如果您使用 M1/M2 Mac，请改为 "aarch64-darwin"
      hostSystem = "x86_64-linux";

      # 为你的 host 系统导入 nixpkgs
      pkgs = nixpkgs.legacyPackages.${hostSystem};

      # [!] 这是关键：定义目标系统，正确的属性名是 "riscv64"
      targetSystem = "riscv64";

      # 获取针对 riscv64 的交叉编译包集合
      crossPkgs = pkgs.pkgsCross.${targetSystem};

    in
    {
      # 定义一个开发环境 (devShell)
      devShells.${hostSystem}.default = pkgs.mkShell {
        # 在这个环境中，我们引入交叉编译工具链
        buildInputs = [
          # 引入 riscv64 的 C/C++ 编译器 (GCC)
          crossPkgs.stdenv.cc
        ];

        # shellHook 会在进入环境时自动运行，用于设置环境变量
        shellHook = ''
          echo "已进入 RISC-V 64 交叉编译环境！"
          
          # 这种方式更健壮，它会自动获取正确的前缀，例如 "riscv64-unknown-linux-gnu-"
          export CC="${crossPkgs.stdenv.cc.targetPrefix}gcc"
          export CXX="${crossPkgs.stdenv.cc.targetPrefix}g++"

          echo "CC 环境变量已设置为: $CC"
        '';
      };

      # 你也可以用它来构建一个交叉编译的包，例如 "hello"
      # 使用 `nix build .#hello-riscv64` 命令来构建
      packages.${hostSystem}.hello-riscv64 = crossPkgs.hello;
    };
}