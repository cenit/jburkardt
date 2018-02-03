#!/bin/bash
#
cp sgmg.hpp /$HOME/include
#
g++ -c -I /$HOME/include sgmg.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sgmg.cpp"
  exit
fi
#
mv sgmg.o ~/libcpp/$ARCH/sgmg.o
#
echo "Library installed as ~/libcpp/$ARCH/sgmg.o"
