#!/bin/bash
#
cp r8utt.hpp /$HOME/include
#
g++ -c -I/$HOME/include r8utt.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8utt.cpp"
  exit
fi
#
mv r8utt.o ~/libcpp/$ARCH/r8utt.o
#
echo "Library installed as ~/libcpp/$ARCH/r8utt.o"
