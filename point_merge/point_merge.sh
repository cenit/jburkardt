#!/bin/bash
#
cp point_merge.hpp /$HOME/include
#
g++ -c -I /$HOME/include point_merge.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling point_merge.cpp"
  exit
fi
#
mv point_merge.o ~/libcpp/$ARCH/point_merge.o
#
echo "Library installed as ~/libcpp/$ARCH/point_merge.o"
