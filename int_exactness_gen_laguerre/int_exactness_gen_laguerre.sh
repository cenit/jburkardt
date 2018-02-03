#!/bin/bash
#
g++ -c int_exactness_gen_laguerre.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling int_exactness_gen_laguerre.cpp"
  exit
fi
#
g++ int_exactness_gen_laguerre.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading int_exactness_gen_laguerre.o"
  exit
fi
rm int_exactness_gen_laguerre.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/int_exactness_gen_laguerre
#
echo "Executable installed as ~/bincpp/$ARCH/int_exactness_gen_laguerre"
