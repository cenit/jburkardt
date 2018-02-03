#!/bin/bash
#
cp task_division.hpp /$HOME/include
#
g++ -c -I /$HOME/include task_division.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling task_division.cpp"
  exit
fi
#
mv task_division.o ~/libcpp/$ARCH/task_division.o
#
echo "Library installed as ~/libcpp/$ARCH/task_division.o"
