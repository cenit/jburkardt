#!/bin/bash
#
cp minpack.hpp /$HOME/include
#
g++ -c -I /$HOME/include minpack.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling minpack.cpp"
  exit
fi
#
mv minpack.o ~/libcpp/minpack.o
#
echo "Library installed as ~/libcpp/minpack.o"
