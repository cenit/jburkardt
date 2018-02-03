#! /bin/bash
#
g++ -c day1_mpi.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling day1_mpi.cpp"
  exit
fi
#
g++ day1_mpi.o  -lm
if [ $? -ne 0 ]; then
  echo "Errors loading day1_mpi.o"
  exit
fi
rm day1_mpi.o
#
mv a.out day1
mpirun -v -np 4 ./day1 > day1_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running day1"
  exit
fi
rm day1
#
echo "The day1 test problem has been executed."
