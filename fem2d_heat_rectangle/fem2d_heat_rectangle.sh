#!/bin/bash
#
g++ -c fem2d_heat_rectangle.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem2d_heat_rectangle.cpp"
  exit
fi
#
g++ fem2d_heat_rectangle.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading fem2d_heat_rectangle.o"
  exit
fi
#
rm fem2d_heat_rectangle.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/fem2d_heat_rectangle
#
echo "Executable installed as ~/bincpp/$ARCH/fem2d_heat_rectangle"
