#! /bin/bash
#
g++ -c -I/$HOME/include triangle_interpolate_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangle_interpolate_prb.cpp"
  exit
fi
#
g++ -o triangle_interpolate_prb triangle_interpolate_prb.o /$HOME/libcpp/$ARCH/triangle_interpolate.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading triangle_interpolate_prb.o."
  exit
fi
#
rm triangle_interpolate_prb.o
#
./triangle_interpolate_prb > triangle_interpolate_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running triangle_interpolate_prb."
  exit
fi
rm triangle_interpolate_prb
#
echo "Program output written to triangle_interpolate_prb_output.txt"
