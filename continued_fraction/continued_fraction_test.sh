#! /bin/bash
#
g++ -c -I/$HOME/include continued_fraction_test.cpp
if [ $? -ne 0 ]; then
  echo "Compile error."
  exit
fi
#
g++ -o continued_fraction_test continued_fraction_test.o /$HOME/libcpp/continued_fraction.o -lm
if [ $? -ne 0 ]; then
  echo "Load error."
  exit
fi
#
rm continued_fraction_test.o
#
./continued_fraction_test > continued_fraction_test.txt
if [ $? -ne 0 ]; then
  echo "Run error."
  exit
fi
rm continued_fraction_test
#
echo "Normal end of execution."
