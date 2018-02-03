#!/bin/bash
#
g++ -c -I/$HOME/include quadrature_test.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling quadrature_test.cpp"
  exit
fi
#
g++ quadrature_test.o /$HOME/libcpp/$ARCH/test_nint.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading quadrature_test.o + testnint.o"
  exit
fi
#
rm quadrature_test.o
#
mv a.out $HOME/bincpp/$ARCH/quadrature_test
#
echo "Executable installed as ~/bincpp/$ARCH/quadrature_test"
