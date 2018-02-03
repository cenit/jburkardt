#!/bin/bash
#
cp calpak.hpp /$HOME/include
#
g++ -c -I /$HOME/include calpak.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling calpak.cpp"
  exit
fi
#
mv calpak.o ~/libcpp/calpak.o
#
echo "Library installed as ~/libcpp/calpak.o"
