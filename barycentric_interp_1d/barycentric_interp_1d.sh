#!/bin/bash
#
cp barycentric_interp_1d.hpp /$HOME/include
#
g++ -c -I/$HOME/include barycentric_interp_1d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling barycentric_interp_1d.cpp"
  exit
fi
#
mv barycentric_interp_1d.o ~/libcpp/barycentric_interp_1d.o
#
echo "Library installed as ~/libcpp/barycentric_interp_1d.o"
