#!/bin/bash
#
g++ -c triangulation_triangle_neighbors.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangulation_triangle_neighbors.cpp"
  exit
fi
#
g++ triangulation_triangle_neighbors.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading triangulation_triangle_neighbors.o."
  exit
fi
#
rm triangulation_triangle_neighbors.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/triangulation_triangle_neighbors
#
echo "Executable installed as ~/bincpp/$ARCH/triangulation_triangle_neighbors"
