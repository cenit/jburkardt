#!/bin/bash
#
g++ -c complex_numbers.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling complex_numbers.cpp"
  exit
fi
#
g++ complex_numbers.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading complex_numbers.o"
  exit
fi
rm complex_numbers.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/complex_numbers
#
echo "Executable installed as ~/bincpp/$ARCH/complex_numbers"
