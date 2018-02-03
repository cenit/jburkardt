#!/bin/bash
#
g++ -c dot_product.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling dot_product.cpp"
  exit
fi
#
g++ dot_product.o
if [ $? -ne 0 ]; then
  echo "Errors loading dot_product.o"
  exit
fi
#
rm dot_product.o
mv a.out dot_product
dot_product > dot_product_output.txt
rm dot_product
#
echo "Program output written to dot_product_output.txt"
