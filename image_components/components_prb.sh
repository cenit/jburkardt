#!/bin/bash
#
g++ -c -I/$HOME/include components_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling components_prb.cpp"
  exit
fi
#
g++ components_prb.o /$HOME/libcpp/$ARCH/components.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading components_prb.o."
  exit
fi
#
rm components_prb.o
#
mv a.out components_prb
./components_prb > components_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running components_prb."
  exit
fi
rm components_prb
#
echo "Program output written to components_prb_output.txt"
