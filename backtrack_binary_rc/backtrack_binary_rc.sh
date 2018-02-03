#!/bin/bash
#
cp backtrack_binary_rc.hpp /$HOME/include
#
g++ -c -I/$HOME/include backtrack_binary_rc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling backtrack_binary_rc.cpp"
  exit
fi
#
mv backtrack_binary_rc.o ~/libcpp/$ARCH/backtrack_binary_rc.o
#
echo "Library installed as ~/libcpp/$ARCH/backtrack_binary_rc.o"
