#!/bin/bash
#
cp chebyshev_interp_1d.hpp /$HOME/include
#
g++ -c -I/$HOME/include chebyshev_interp_1d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling chebyshev_interp_1d.cpp"
  exit
fi
#
mv chebyshev_interp_1d.o ~/libcpp/$ARCH/chebyshev_interp_1d.o
#
echo "Library installed as ~/libcpp/$ARCH/chebyshev_interp_1d.o"
