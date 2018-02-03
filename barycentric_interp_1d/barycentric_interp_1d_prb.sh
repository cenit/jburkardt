#!/bin/bash
#
g++ -c -I/$HOME/include barycentric_interp_1d_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling barycentric_interp_1d_prb.cpp"
  exit
fi
#
g++ barycentric_interp_1d_prb.o /$HOME/libcpp/barycentric_interp_1d.o \
                                /$HOME/libcpp/test_interp_1d.o \
                                /$HOME/libcpp/r8lib.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading barycentric_interp_1d_prb.o."
  exit
fi
#
rm barycentric_interp_1d_prb.o
#
mv a.out barycentric_interp_1d_prb
./barycentric_interp_1d_prb > barycentric_interp_1d_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running barycentric_interp_1d_prb."
  exit
fi
rm barycentric_interp_1d_prb
#
echo "Program output written to barycentric_interp_1d_prb_output.txt"
