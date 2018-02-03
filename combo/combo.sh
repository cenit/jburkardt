#!/bin/bash
#
cp combo.hpp /$HOME/include
#
g++ -c -I /$HOME/include combo.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling combo.cpp"
  exit
fi
#
mv combo.o ~/libcpp/$ARCH/combo.o
#
echo "Library installed as ~/libcpp/$ARCH/combo.o"
