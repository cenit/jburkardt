#!/bin/bash
#
g++ -c -I/usr/local/dislin geyser.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling geyser.cpp"
  exit
fi
#
g++ geyser.o -L/usr/local/dislin -ldislin -L/opt/local/lib -lXm -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading geyser.o."
  exit
fi
#
rm geyser.o
#
mv a.out geyser
./geyser > geyser_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running geyser."
  exit
fi
rm geyser
#
echo "Program output written to geyser_output.txt"
