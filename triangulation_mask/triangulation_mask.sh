#!/bin/bash
#
g++ -c triangulation_mask.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangulation_mask.cpp"
  exit
fi
#
mv triangulation_mask.o ~/libcpp/$ARCH/
#
echo "Library installed as ~/libcpp/$ARCH/triangulation_mask.o"
