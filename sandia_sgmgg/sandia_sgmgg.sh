#!/bin/bash
#
cp sandia_sgmgg.hpp $HOME/include
#
g++ -c -I $HOME/include sandia_sgmgg.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sandia_sgmgg.cpp"
  exit
fi
#
mv sandia_sgmgg.o ~/libcpp/$ARCH/sandia_sgmgg.o
#
echo "Library installed as ~/libcpp/$ARCH/sandia_sgmgg.o"
