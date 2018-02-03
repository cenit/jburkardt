#!/bin/bash
#
cp subset_sum_serial.hpp /$HOME/include
#
g++ -c -I/$HOME/include subset_sum_serial.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling subset_sum_serial.cpp"
  exit
fi
#
mv subset_sum_serial.o ~/libcpp/$ARCH/subset_sum_serial.o
#
echo "Library installed as ~/libcpp/$ARCH/subset_sum_serial.o"
