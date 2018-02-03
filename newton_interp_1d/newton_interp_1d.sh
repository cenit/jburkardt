#!/bin/bash
#
cp newton_interp_1d.hpp /$HOME/include
#
g++ -c -I/$HOME/include newton_interp_1d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling newton_interp_1d.cpp"
  exit
fi
#
mv newton_interp_1d.o ~/libcpp/$ARCH/newton_interp_1d.o
#
echo "Library installed as ~/libcpp/$ARCH/newton_interp_1d.o"
