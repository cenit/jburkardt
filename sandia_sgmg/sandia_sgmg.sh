#!/bin/bash
#
cp sandia_sgmg.hpp /$HOME/include
#
g++ -c -I /$HOME/include sandia_sgmg.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sandia_sgmg.cpp"
  exit
fi
#
mv sandia_sgmg.o ~/libcpp/$ARCH/sandia_sgmg.o
#
echo "Library installed as ~/libcpp/$ARCH/sandia_sgmg.o"
