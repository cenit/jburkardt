#!/bin/bash
#
g++ -c rectangle.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rectangle.cpp"
  exit
fi
#
g++ rectangle.o $HOME/libcpp/$ARCH/toms886.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading rectangle.o"
  exit
fi
rm rectangle.o
#
mv a.out rectangle
./rectangle > rectangle_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running rectangle"
  exit
fi
rm rectangle
#
echo "Test results written to rectangle_output.txt."
