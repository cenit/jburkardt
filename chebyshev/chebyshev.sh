#!/bin/bash
#
cp chebyshev.hpp /$HOME/include
#
g++ -c -I /$HOME/include chebyshev.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling chebyshev.cpp"
  exit
fi
#
mv chebyshev.o ~/libcpp/$ARCH/chebyshev.o
#
echo "Library installed as ~/libcpp/$ARCH/chebyshev.o"
