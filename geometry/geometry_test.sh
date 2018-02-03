#! /bin/bash
#
g++ -c -I/$HOME/include geometry_test.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
g++ geometry_test.o /$HOME/libcpp/geometry.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm geometry_test.o
#
mv a.out geometry_test
./geometry_test > geometry_test.txt
if [ $? -ne 0 ]; then
  echo "Run errors."
  exit
fi
rm geometry_test
#
echo "Normal end of execution."
