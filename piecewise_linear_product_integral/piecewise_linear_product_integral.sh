#!/bin/bash
#
cp piecewise_linear_product_integral.hpp /$HOME/include
#
g++ -c -I /$HOME/include piecewise_linear_product_integral.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling piecewise_linear_product_integral.cpp"
  exit
fi
#
mv piecewise_linear_product_integral.o ~/libcpp/$ARCH/piecewise_linear_product_integral.o
#
echo "Library installed as ~/libcpp/$ARCH/piecewise_linear_product_integral.o"
