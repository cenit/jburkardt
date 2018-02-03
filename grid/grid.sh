#! /bin/bash
#
cp grid.hpp /$HOME/include
#
g++ -c -g -I /$HOME/include grid.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling grid.cpp"
  exit
fi
#
mv grid.o ~/libcpp/$ARCH/grid.o
#
echo "Library installed as ~/libcpp/$ARCH/grid.o"
