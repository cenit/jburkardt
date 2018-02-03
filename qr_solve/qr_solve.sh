#!/bin/bash
#
cp qr_solve.hpp /$HOME/include
#
g++ -c -I /$HOME/include qr_solve.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling qr_solve.cpp"
  exit
fi
#
mv qr_solve.o ~/libcpp/$ARCH/qr_solve.o
#
echo "Library installed as ~/libcpp/$ARCH/qr_solve.o"
