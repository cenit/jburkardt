#!/bin/bash
#
cp colored_noise.hpp /$HOME/include
#
g++ -c -I /$HOME/include colored_noise.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling colored_noise.cpp"
  exit
fi
#
mv colored_noise.o ~/libcpp/colored_noise.o
#
echo "Library installed as ~/libcpp/colored_noise.o"
