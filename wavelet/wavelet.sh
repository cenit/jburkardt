#!/bin/bash
#
cp wavelet.hpp /$HOME/include
#
g++ -c -I /$HOME/include wavelet.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling wavelet.cpp"
  exit
fi
#
mv wavelet.o ~/libcpp/$ARCH/wavelet.o
#
echo "Library installed as ~/libcpp/$ARCH/wavelet.o"
