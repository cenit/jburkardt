#! /bin/bash
#
g++ -c bones_mpi.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling bones_mpi.cpp"
  exit
fi
#
g++ bones_mpi.o -lm
if [ $? -ne 0 ]; then
  echo "Errors loading bones_mpi.o"
  exit
fi
rm bones_mpi.o
#
mv a.out bones
mpirun -v -np 4 ./bones > bones_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running bones"
  exit
fi
rm bones
#
echo "The bones test problem has been executed."
