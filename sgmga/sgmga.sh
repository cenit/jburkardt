#!/bin/bash
#
cp sgmga.hpp /$HOME/include
#
g++ -c -I /$HOME/include sgmga.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sgmga.cpp"
  exit
fi
#
mv sgmga.o ~/libcpp/$ARCH/sgmga.o
#
echo "Library installed as ~/libcpp/$ARCH/sgmga.o"
