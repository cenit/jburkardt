#!/bin/bash
#
cp stla_io.hpp /$HOME/include
#
g++ -c -I /$HOME/include stla_io.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling stla_io.cpp"
  exit
fi
#
mv stla_io.o ~/libcpp/$ARCH/stla_io.o
#
echo "Library installed as ~/libcpp/$ARCH/stla_io.o"
