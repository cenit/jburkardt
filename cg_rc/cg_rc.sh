#!/bin/bash
#
cp cg_rc.hpp /$HOME/include
#
g++ -c -I/$HOME/include cg_rc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cg_rc.cpp"
  exit
fi
#
mv cg_rc.o ~/libcpp/$ARCH/cg_rc.o
#
echo "Library installed as ~/libcpp/$ARCH/cg_rc.o"
