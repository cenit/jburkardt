#!/bin/bash
#
g++ -c -I/$HOME/include triangle_properties_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangle_properties_prb.cpp"
  exit
fi
#
g++ triangle_properties_prb.o /$HOME/libcpp/$ARCH/triangle_properties.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading triangle_properties_prb.o"
  exit
fi
#
rm triangle_properties_prb.o
#
mv a.out triangle_properties_prb
./triangle_properties_prb > triangle_properties_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running triangle_properties_prb."
  exit
fi
rm triangle_properties_prb
#
echo "Program output written to triangle_properties_prb_output.txt"
