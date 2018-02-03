#!/bin/bash
#
cp subpak.hpp /$HOME/include
#
g++ -c -I /$HOME/include subpak.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling subpak.cpp"
  exit
fi
#
mv subpak.o ~/libcpp/$ARCH/subpak.o
#
echo "Library installed as ~/libcpp/$ARCH/subpak.o"
