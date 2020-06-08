{ pkgs ? import <nixpkgs> {} }:
  pkgs.mkShell {
    buildInputs = [ pkgs.gcc pkgs.cmake pkgs.gnumake pkgs.xorg.libpthreadstubs ];
}
