#!/bin/bash
#
g++ -c triangulation_refine.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangulation_refine.cpp"
  exit
fi
#
g++ triangulation_refine.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading triangulation_refine.o."
  exit
fi
#
rm triangulation_refine.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/triangulation_refine
#
echo "Executable installed as ~/bincpp/$ARCH/triangulation_refine"
