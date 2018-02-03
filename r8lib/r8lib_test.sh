#! /bin/bash
#
g++ -c -I/$HOME/include r8lib_test.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
g++ r8lib_test.o /$HOME/libcpp/r8lib.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm r8lib_test.o
#
mv a.out r8lib_test
./r8lib_test > r8lib_test.txt
if [ $? -ne 0 ]; then
  echo "Run errors."
  exit
fi
rm r8lib_test
#
echo "Normal end of execution."
