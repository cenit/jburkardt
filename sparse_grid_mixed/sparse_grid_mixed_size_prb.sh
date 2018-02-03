#!/bin/bash
#
g++ -c -I/$HOME/include sparse_grid_mixed_size_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sparse_grid_mixed_size_prb.cpp"
  exit
fi
#
g++ sparse_grid_mixed_size_prb.o /$HOME/libcpp/$ARCH/sparse_grid_mixed.o /$HOME/libcpp/$ARCH/sandia_rules.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sparse_grid_mixed_size_prb.o."
  exit
fi
#
rm sparse_grid_mixed_size_prb.o
#
mv a.out sparse_grid_mixed_size_prb
./sparse_grid_mixed_size_prb > sparse_grid_mixed_size_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sparse_grid_mixed_size_prb."
  exit
fi
rm sparse_grid_mixed_size_prb
#
echo "Program output written to sparse_grid_mixed_size_prb_output.txt"
