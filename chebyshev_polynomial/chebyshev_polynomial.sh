#!/bin/bash
#
cp chebyshev_polynomial.hpp /$HOME/include
#
g++ -c -I /$HOME/include chebyshev_polynomial.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling chebyshev_polynomial.cpp"
  exit
fi
#
mv chebyshev_polynomial.o ~/libcpp/$ARCH/chebyshev_polynomial.o
#
echo "Library installed as ~/libcpp/$ARCH/chebyshev_polynomial.o"
