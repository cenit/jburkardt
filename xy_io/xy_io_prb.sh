#!/bin/bash
#
g++ -c -I/$HOME/include xy_io_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling xy_io_prb.cpp"
  exit
fi
#
g++ xy_io_prb.o /$HOME/libcpp/$ARCH/xy_io.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading xy_io_prb.o."
  exit
fi
#
rm xy_io_prb.o
#
mv a.out xy_io_prb
./xy_io_prb > xy_io_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running xy_io_prb."
  exit
fi
rm xy_io_prb
#
echo "Program output written to xy_io_prb_output.txt"
