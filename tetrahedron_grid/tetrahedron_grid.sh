#!/bin/bash
#
cp tetrahedron_grid.H /$HOME/include
#
g++ -c tetrahedron_grid.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling tetrahedron_grid.cpp."
  exit
fi
#
mv tetrahedron_grid.o ~/libcpp/$ARCH/tetrahedron_grid.o
#
echo "Library installed as ~/libcpp/$ARCH/tetrahedron_grid.o"
