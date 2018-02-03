#!/bin/bash
#
cp sftpack.hpp /$HOME/include
#
g++ -c -I /$HOME/include sftpack.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sftpack.cpp"
  exit
fi
#
mv sftpack.o ~/libcpp/sftpack.o
#
echo "Library installed as ~/libcpp/sftpack.o"
