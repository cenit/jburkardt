#!/bin/bash
#
g++ -c -I/$HOME/include line_monte_carlo_test.cpp
if [ $? -ne 0 ]; then
  echo "Compiler errors"
  exit
fi
#
g++ line_monte_carlo_test.o /$HOME/libcpp/line_monte_carlo.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm line_monte_carlo_test.o
#
mv a.out line_monte_carlo_test
./line_monte_carlo_test > line_monte_carlo_test_output.txt
if [ $? -ne 0 ]; then
  echo "Runtime errors."
  exit
fi
rm line_monte_carlo_test
#
echo "Normal end of execution."
