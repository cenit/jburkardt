#!/bin/bash
#
cp combination_lock.hpp /$HOME/include
#
g++ -c -I /$HOME/include combination_lock.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling combination_lock.cpp"
  exit
fi
#
mv combination_lock.o ~/libcpp/$ARCH/combination_lock.o
#
echo "Library installed as ~/libcpp/$ARCH/combination_lock.o"
