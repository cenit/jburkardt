#!/bin/bash
#
g++ -c drand48_test.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling drand48_test.cpp"
  exit
fi
#
g++ drand48_test.o
if [ $? -ne 0 ]; then
  echo "Errors loading drand48_test.o"
  exit
fi
rm drand48_test.o
#
mv a.out drand48_test
./drand48_test > drand48_test_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running drand48_test"
  exit
fi
rm drand48_test
#
echo "Program output written to drand48_test_output.txt"
