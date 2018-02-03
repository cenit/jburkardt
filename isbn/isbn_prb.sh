#!/bin/bash
#
g++ -c -I/$HOME/include isbn_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling isbn_prb.cpp"
  exit
fi
#
g++ -o isbn_prb isbn_prb.o /$HOME/libcpp/$ARCH/isbn.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading isbn_prb.o."
  exit
fi
#
rm isbn_prb.o
#
./isbn_prb > isbn_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running isbn_prb."
  exit
fi
rm isbn_prb
#
echo "Program output written to isbn_prb_output.txt"
