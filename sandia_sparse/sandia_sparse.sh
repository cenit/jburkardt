#!/bin/bash
#
cp sandia_sparse.hpp /$HOME/include
#
g++ -c -I /$HOME/include sandia_sparse.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sandia_sparse.cpp"
  exit
fi
#
mv sandia_sparse.o ~/libcpp/$ARCH/sandia_sparse.o
#
echo "Library installed as ~/libcpp/$ARCH/sandia_sparse.o"
