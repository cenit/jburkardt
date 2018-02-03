#!/bin/bash
#
cp sandia_sgmga.hpp /$HOME/include
#
g++ -c -I /$HOME/include sandia_sgmga.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sandia_sgmga.cpp"
  exit
fi
#
mv sandia_sgmga.o ~/libcpp/$ARCH/sandia_sgmga.o
#
echo "Library installed as ~/libcpp/$ARCH/sandia_sgmga.o"
