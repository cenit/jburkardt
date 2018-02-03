#!/bin/bash
#
g++ -c -I/usr/local/dislin lissajous.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lissajous.cpp"
  exit
fi
#
g++ lissajous.o -L/usr/local/dislin -ldislin -L/opt/local/lib -lXm -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading lissajous.o."
  exit
fi
#
rm lissajous.o
#
mv a.out lissajous
./lissajous > lissajous_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running lissajous."
  exit
fi
rm lissajous
#
echo "Program output written to lissajous_output.txt"
