#! /bin/bash
#
g++ -c -I/$HOME/include halton_advanced_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling halton_advanced_prb.cpp"
  exit
fi
#
g++ halton_advanced_prb.o /$HOME/libcpp/$ARCH/halton_advanced.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading halton_advanced_prb.o."
  exit
fi
#
rm halton_advanced_prb.o
#
mv a.out halton_advanced_prb
./halton_advanced_prb > halton_advanced_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running halton_advanced_prb."
  exit
fi
rm halton_advanced_prb
#
echo "Program output written to halton_advanced_prb_output.txt"
