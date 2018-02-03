#!/bin/bash
#
cp file_name_sequence.hpp /$HOME/include
#
g++ -c file_name_sequence.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling file_name_sequence.cpp."
  exit
fi
#
mv file_name_sequence.o ~/libcpp/$ARCH/file_name_sequence.o
#
echo "Library installed as ~/libcpp/$ARCH/file_name_sequence.o"
