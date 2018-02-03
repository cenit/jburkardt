#!/bin/bash
#
g++ -c -I/$HOME/include sandia_sparse_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sandia_sparse_prb.cpp"
  exit
fi
#
g++ sandia_sparse_prb.o /$HOME/libcpp/$ARCH/sandia_sparse.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sandia_sparse_prb.o."
  exit
fi
#
rm sandia_sparse_prb.o
#
mv a.out sandia_sparse_prb
./sandia_sparse_prb > sandia_sparse_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sandia_sparse_prb."
  exit
fi
rm sandia_sparse_prb
#
echo "Program output written to sandia_sparse_prb_output.txt"
