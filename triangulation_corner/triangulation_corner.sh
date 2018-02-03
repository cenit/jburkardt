#!/bin/bash
#
g++ -c triangulation_corner.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangulation_corner.cpp"
  exit
fi
#
g++ triangulation_corner.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading triangulation_corner.o."
  exit
fi
#
rm triangulation_corner.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/triangulation_corner
#
echo "Executable installed as ~/bincpp/$ARCH/triangulation_corner"
