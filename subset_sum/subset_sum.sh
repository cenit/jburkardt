#!/bin/bash
#
cp subset_sum.hpp /$HOME/include
#
g++ -c -I /$HOME/include subset_sum.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling subset_sum.cpp."
  exit
fi
#
mv subset_sum.o ~/libcpp/subset_sum.o
#
echo "Library installed as ~/libcpp/subset_sum.o"
