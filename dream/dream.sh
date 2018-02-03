#!/bin/bash
#
cp dream.hpp /$HOME/include
#
g++ -c -I/$HOME/include dream.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling dream.cpp"
  exit
fi
#
mv dream.o ~/libcpp/dream.o
#
echo "Library installed as ~/libcpp/dream.o"
