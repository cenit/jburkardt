#! /bin/bash
#
g++ -c -I/$HOME/include test_values_test.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
g++ test_values_test.o /$HOME/libcpp/test_values.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm test_values_test.o
#
mv a.out test_values_test
./test_values_test > test_values_test.txt
if [ $? -ne 0 ]; then
  echo "Run errors."
  exit
fi
rm test_values_test
#
echo "Normal end of execution."
