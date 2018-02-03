#!/bin/bash
#
cp cnf_io.hpp /$HOME/include
#
g++ -c -I /$HOME/include cnf_io.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cnf_io.cpp"
  exit
fi
#
mv cnf_io.o ~/libcpp/$ARCH/cnf_io.o
#
echo "Library installed as ~/libcpp/$ARCH/cnf_io.o"
