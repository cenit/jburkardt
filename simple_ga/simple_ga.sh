#!/bin/bash
#
g++ -c simple_ga.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling simple_ga.cpp"
  exit
fi
#
g++ simple_ga.o
if [ $? -ne 0 ]; then
  echo "Errors loading simple_ga.o."
  exit
fi
#
rm simple_ga.o
mv a.out ~/bincpp/$ARCH/simple_ga
#
echo "Executable installed as ~/bincpp/$ARCH/simple_ga"
