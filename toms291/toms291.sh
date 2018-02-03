#!/bin/bash
#
cp toms291.hpp /$HOME/include
#
g++ -c -I /$HOME/include toms291.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms291.cpp"
  exit
fi
#
mv toms291.o ~/libcpp/$ARCH/toms291.o
#
echo "Library installed as ~/libcpp/$ARCH/toms291.o"
