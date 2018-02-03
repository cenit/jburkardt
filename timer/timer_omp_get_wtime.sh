#!/bin/bash
#
g++ -c -fopenmp timer_omp_get_wtime.cpp
if [ $? -ne 0 ]; then
  echo "Compilation errors."
  exit
fi
#
g++ -fopenmp -o timer_openmp_get_wtime timer_omp_get_wtime.o
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
mv a.out timer_omp_get_wtime
#
./timer_omp_get_wtime > timer_omp_get_wtime.txt
if [ $? -ne 0 ]; then
  echo "Runtime errors."
  exit
fi
#
rm timer_omp_get_wtime.o
rm timer_omp_get_wtime
#
echo "Normal end of execution."
