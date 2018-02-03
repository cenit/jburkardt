#!/bin/bash
#
g++ -c fem2d_poisson_sparse.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem2d_poisson_sparse.cpp"
  exit
fi
#
mv fem2d_poisson_sparse.o ~/libcpp/$ARCH
#
echo "Partial program installed as ~/libcpp/$ARCH/fem2d_poisson_sparse.o"
