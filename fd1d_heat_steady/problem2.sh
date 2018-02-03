#!/bin/bash
#
g++ -c problem2.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling problem2.cpp"
  exit
fi
#
g++ problem2.o $HOME/libcpp/$ARCH/fd1d_heat_steady.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading problem2.o"
  exit
fi
rm problem2.o
#
mv a.out problem2
./problem2 > problem2_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running problem2"
  exit
fi
rm problem2
#
echo "Test program output written to problem2_output.txt."
