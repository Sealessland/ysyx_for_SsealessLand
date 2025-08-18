{
  description = "一个基于 Mill 和 Chisel 的 Nix Flake 项目";

  inputs = {
    # 使用 NixOS 24.05 稳定频道，以获得更可预测和稳定的软件包
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-24.05";

    # flake-parts 用于模块化和简化 Flake 配置
    flake-parts.url = "github:hercules-ci/flake-parts";

    # treefmt-nix 用于统一配置多种代码格式化工具
    treefmt-nix = {
      url = "github:numtide/treefmt-nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    # mill-ivy-fetcher 用于在 Nix 中无缝处理 Mill 项目的依赖项
    mill-ivy-fetcher = {
      url = "github:Avimitin/mill-ivy-fetcher";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };

  outputs = inputs@{ self, nixpkgs, flake-parts, ... }:
    flake-parts.lib.mkFlake { inherit inputs; } {
      # 定义此 Flake 支持的系统架构
      systems = [
        "x86_64-linux"
        "aarch64-linux"
        "aarch64-darwin"
        "x86_64-darwin"
      ];

      # 导入 treefmt-nix 模块以便后续使用
      imports = [
        inputs.treefmt-nix.flakeModule
      ];

      # perSystem 会为上面 'systems' 列表中的每个系统架构执行一次
      perSystem = { config, pkgs, system, ... }:
      let
        # 为当前系统创建一个应用了 mill-ivy-fetcher overlay 的 nixpkgs 实例
        # 这使得我们可以使用像 'buildMill' 这样的函数
        pkgs' = import nixpkgs {
          inherit system;
          overlays = [ inputs.mill-ivy-fetcher.overlays.default ];
        };

        # 使用 buildMill 函数定义如何构建整个项目。
        # 它会自动处理 build.mill 中定义的 Ivy 依赖。
        project = pkgs'.buildMill {
          pname = "ysyxSoC-project";
          version = "0.1.0";
          src = ./.; # 项目源代码就是当前目录

          # 传递给 mill 命令的参数，这里我们要求它编译所有模块
          buildMillArgs = [ "__.compile" ];
        };
      in
      {
        # 将我们定义的项目构建设置为默认的可构建包
        # 可以通过 `nix build .` 来运行
        packages.default = project;

        # 配置 treefmt 以统一代码格式
        treefmt = {
          projectRootFile = "flake.nix";
          programs = {
            # 为 Scala 和 Mill 配置文件启用 scalafmt
            scalafmt.enable = true;
            # 为 Nix 代码启用 nixfmt
            nixfmt.enable = true;
          };
        };

        # 定义默认的开发环境，通过 `nix develop` 进入
        devShells.default = pkgs'.mkShell {
          # 'inputsFrom' 可以从指定的构建包中继承构建依赖和环境变量
          inputsFrom = [ project ];

          # 在开发环境中需要用到的工具
          packages = with pkgs'; [
            # mill-with-dot-ivy-folder 是一个 mill 包装器，
            # 它会自动在环境中设置一个包含所有预下载依赖的 .ivy2 缓存目录
            firtool
            espresso
            mill-ivy-fetcher.packages.${system}.mill-with-dot-ivy-folder
            jdk   # Java 开发环境
            scala # Scala 编译器和运行时
            bsp-cli # 用于与构建服务器协议（BSP）交互，IDE 常用
            mill-bsp # Mill 的 BSP 实现，确保 metals 等工具能理解项目结构
            metals  # Scala 语言服务器
            scalafmt # Scala 格式化工具
          ];
        };
      };
    };
}