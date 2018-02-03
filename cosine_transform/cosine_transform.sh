#!/bin/bash
#
cp cosine_transform.hpp /$HOME/include
#
g++ -c -I /$HOME/include cosine_transform.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cosine_transform.cpp"
  exit
fi
#
mv cosine_transform.o ~/libcpp/$ARCH/cosine_transform.o
#
echo "Library installed as ~/libcpp/$ARCH/cosine_transform.o"
