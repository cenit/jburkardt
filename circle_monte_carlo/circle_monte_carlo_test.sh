#!/bin/bash
#
g++ -c -I/$HOME/include circle_monte_carlo_test.cpp
if [ $? -ne 0 ]; then
  echo "Compiler errors."
  exit
fi
#
g++ circle_monte_carlo_test.o /$HOME/libcpp/circle_monte_carlo.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm circle_monte_carlo_test.o
#
mv a.out circle_monte_carlo_test
./circle_monte_carlo_test > circle_monte_carlo_test_output.txt
if [ $? -ne 0 ]; then
  echo "Run time errors."
  exit
fi
rm circle_monte_carlo_test
#
echo "Normal end of execution."
