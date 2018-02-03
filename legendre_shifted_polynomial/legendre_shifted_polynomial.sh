#! /bin/bash
#
cp legendre_shifted_polynomial.hpp /$HOME/include
#
g++ -c -I /$HOME/include legendre_shifted_polynomial.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling legendre_shifted_polynomial.cpp"
  exit
fi
#
mv legendre_shifted_polynomial.o ~/libcpp/$ARCH/legendre_shifted_polynomial.o
#
echo "Library installed as ~/libcpp/$ARCH/legendre_shifted_polynomial.o"
