#! /bin/bash
#
g++ -c -I/$HOME/include minpack_test.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
g++ minpack_test.o /$HOME/libcpp/minpack.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm minpack_test.o
#
mv a.out minpack_test
./minpack_test > minpack_test.txt
if [ $? -ne 0 ]; then
  echo "Run errors."
  exit
fi
rm minpack_test
#
echo "Normal end of execution."
