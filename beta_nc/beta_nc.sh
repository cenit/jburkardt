#!/bin/bash
#
cp beta_nc.hpp /$HOME/include
#
g++ -c -I /$HOME/include beta_nc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling beta_nc.cpp"
  exit
fi
#
mv beta_nc.o ~/libcpp/$ARCH/beta_nc.o
#
echo "Library installed as ~/libcpp/$ARCH/beta_nc.o"
