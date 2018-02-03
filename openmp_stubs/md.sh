#!/bin/bash
#
#  Copy the STUBS include file temporarily.
#
cp openmp_stubs.hpp omp.h
#
#  Compile the program.
#
g++ ../openmp/md.cpp -I. -L$HOME/libcpp/$ARCH -lopenmp_stubs
mv a.out md
rm omp.h
#
#  Run the program.
#
./md > md_output.txt
rm md
#
echo "Normal end of execution."
