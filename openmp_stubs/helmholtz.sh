#!/bin/bash
#
#  Copy the STUBS include file temporarily.
#
cp openmp_stubs.hpp omp.h
#
#  Compile the program.
#
g++ ../openmp/helmholtz.cpp -I. -L$HOME/libcpp/$ARCH -lopenmp_stubs
mv a.out helmholtz
rm omp.h
#
#  Run the program.
#
./helmholtz > helmholtz_output.txt
rm helmholtz
#
echo "Normal end of execution."
