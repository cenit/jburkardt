#! /bin/bash
#
cp black_scholes.hpp /$HOME/include
#
g++ -c -I /$HOME/include black_scholes.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling black_scholes.cpp."
  exit
fi
#
mv black_scholes.o ~/libcpp/$ARCH/black_scholes.o
#
echo "Library installed as ~/libcpp/$ARCH/black_scholes.o"
