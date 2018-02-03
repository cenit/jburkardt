#!/bin/bash
#
cp table_io.hpp /$HOME/include
#
g++ -c -I /$HOME/include table_io.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling table_io.cpp"
  exit
fi
#
mv table_io.o ~/libcpp/$ARCH/table_io.o
#
echo "Library installed as ~/libcpp/$ARCH/table_io.o"
