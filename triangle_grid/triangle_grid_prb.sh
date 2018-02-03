#!/bin/bash
#
g++ -c -I/$HOME/include triangle_grid_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangle_grid_prb.cpp"
  exit
fi
#
g++ triangle_grid_prb.o /$HOME/libcpp/$ARCH/triangle_grid.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading triangle_grid_prb.o."
  exit
fi
#
rm triangle_grid_prb.o
#
mv a.out triangle_grid_prb
./triangle_grid_prb > triangle_grid_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running triangle_grid_prb."
  exit
fi
rm triangle_grid_prb
#
echo "Program output written to triangle_grid_prb_output.txt"
