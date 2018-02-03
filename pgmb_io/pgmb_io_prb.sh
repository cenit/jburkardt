#!/bin/bash
#
g++ -c -I/$HOME/include pgmb_io_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pgmb_io_prb.cpp"
  exit
fi
#
g++ pgmb_io_prb.o /$HOME/libcpp/$ARCH/pgmb_io.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading pgmb_io_prb.o."
  exit
fi
#
rm pgmb_io_prb.o
#
mv a.out pgmb_io_prb
./pgmb_io_prb > pgmb_io_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running pgmb_io_prb."
  exit
fi
rm pgmb_io_prb
#
echo "Program output written to pgmb_io_prb_output.txt"
