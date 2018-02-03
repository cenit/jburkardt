#!/bin/bash
#
cp circle_segment.hpp /$HOME/include
#
g++ -c -I/$HOME/include circle_segment.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling circle_segment.cpp"
  exit
fi
#
mv circle_segment.o ~/libcpp/$ARCH/circle_segment.o
#
echo "Library installed as ~/libcpp/$ARCH/circle_segment.o"
