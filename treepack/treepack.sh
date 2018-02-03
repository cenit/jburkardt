#!/bin/bash
#
cp treepack.hpp /$HOME/include
#
g++ -c -I/$HOME/include treepack.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling treepack.cpp"
  exit
fi
#
mv treepack.o ~/libcpp/$ARCH/treepack.o
#
echo "Library installed as ~/libcpp/$ARCH/treepack.o"
