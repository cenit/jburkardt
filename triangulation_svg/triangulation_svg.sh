#!/bin/bash
#
g++ -c triangulation_svg.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangulation_svg.cpp"
  exit
fi
#
g++ triangulation_svg.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading triangulation_svg.o."
  exit
fi
#
rm triangulation_svg.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/triangulation_svg
#
echo "Executable installed as ~/bincpp/$ARCH/triangulation_svg"
