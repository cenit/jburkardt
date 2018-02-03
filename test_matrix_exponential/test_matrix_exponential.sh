#!/bin/bash
#
cp test_matrix_exponential.hpp /$HOME/include
#
g++ -c -I /$HOME/include test_matrix_exponential.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_matrix_exponential.cpp"
  exit
fi
#
mv test_matrix_exponential.o ~/libcpp/$ARCH/test_matrix_exponential.o
#
echo "Library installed as ~/libcpp/$ARCH/test_matrix_exponential.o"
