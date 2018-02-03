#!/bin/bash
#
g++ -c -I/usr/local/dislin orbital.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling orbital.cpp"
  exit
fi
#
g++ orbital.o -L/usr/local/dislin -ldislin -L/opt/local/lib -lXm -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading orbital.o."
  exit
fi
#
rm orbital.o
#
mv a.out orbital
./orbital > orbital_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running orbital."
  exit
fi
rm orbital
#
echo "Program output written to orbital_output.txt"
