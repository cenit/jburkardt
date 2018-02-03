#!/bin/bash
#
cp gegenbauer_cc.hpp /$HOME/include
#
g++ -c -I/$HOME/include gegenbauer_cc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gegenbauer_cc.cpp"
  exit
fi
#
mv gegenbauer_cc.o ~/libcpp/$ARCH/gegenbauer_cc.o
#
echo "Library installed as ~/libcpp/$ARCH/gegenbauer_cc.o"
