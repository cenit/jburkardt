#!/bin/bash
#
g++ -c -I$HOME/include svd_basis.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling svd_basis.cpp"
  exit
fi
#
g++ svd_basis.o $HOME/libcpp/$ARCH/linpack_d.o $HOME/libcpp/$ARCH/blas1_d.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading svd_basis.o + linpack_d.o + blas1_d.o."
  exit
fi
#
rm svd_basis.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/svd_basis
#
echo "Executable installed as ~/bincpp/$ARCH/svd_basis"
