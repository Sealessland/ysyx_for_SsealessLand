{
  description = "Chisel-npc Nix";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-25.05";
    flake-parts = {
      url = "github:hercules-ci/flake-parts";
      inputs.nixpkgs-lib.follows = "nixpkgs";
    };
    treefmt-nix = {
      url = "github:numtide/treefmt-nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };
    mill-ivy-fetcher.url = "github:Avimitin/mill-ivy-fetcher";
  };

  outputs =
    inputs@{
      self,
      nixpkgs,
      flake-parts,
      ...
    }:
    let
      overlay = import ./overlay.nix;
    in
    flake-parts.lib.mkFlake { inherit inputs; } {
      systems = [
        "x86_64-linux"
        "aarch64-linux"
        "aarch64-darwin"
      ];

      imports = [
        inputs.treefmt-nix.flakeModule
      ];

      flake.overlays.default = overlay;

      perSystem =
        { system, pkgs, ... }:
        {
          _module.args.pkgs = import nixpkgs {
            inherit system;
            # TODO: Do not depend on overlay of zaozi in favor of importing its outputs explicitly to avoid namespace pollution.
            overlays = with inputs; [
              mill-ivy-fetcher.overlays.default
              overlay
            ];
          };

          legacyPackages = pkgs;

          treefmt = {
            projectRootFile = "flake.nix";
            programs.scalafmt = {
              enable = true;
              includes = [ "*.mill" ];
            };
          };
          devShells.default = pkgs.mkShell {
            # Add the packages needed for your development environment here
            packages = with pkgs; [
              mill
              jdk
              verilator # A common tool for Chisel projects
              gtkwave   # For viewing simulation waveforms
            ];
          };
          
        };
    };
}