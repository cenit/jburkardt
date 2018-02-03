#!/bin/bash
#
g++ -c -I/$HOME/include fastgl_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fastgl_prb.cpp"
  exit
fi
#
g++ fastgl_prb.o /$HOME/libcpp/$ARCH/fastgl.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading fastgl_prb.o"
  exit
fi
#
rm fastgl_prb.o
#
mv a.out fastgl_prb
./fastgl_prb > fastgl_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running fastgl_prb."
  exit
fi
rm fastgl_prb
#
echo "Program output written to fastgl_prb_output.txt"
