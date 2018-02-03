#!/bin/bash
#
cp prime_serial.hpp /$HOME/include
#
g++ -c -I /$HOME/include prime_serial.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling prime_serial.cpp"
  exit
fi
#
mv prime_serial.o ~/libcpp/$ARCH/prime_serial.o
#
echo "Library installed as ~/libcpp/$ARCH/prime_serial.o"
