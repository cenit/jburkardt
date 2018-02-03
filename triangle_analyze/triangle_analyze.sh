#!/bin/bash
#
g++ -c triangle_analyze.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangle_analyze.cpp"
  exit
fi
#
g++ triangle_analyze.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading triangle_analyze.o"
  exit
fi
rm triangle_analyze.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/triangle_analyze
#
echo "Executable installed as ~/bincpp/$ARCH/triangle_analyze"
