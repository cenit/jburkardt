#!/bin/bash
#
g++ -c triangulation_boundary_nodes.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangulation_boundary_nodes.cpp"
  exit
fi
#
g++ triangulation_boundary_nodes.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading triangulation_boundary_nodes.o."
  exit
fi
#
rm triangulation_boundary_nodes.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/triangulation_boundary_nodes
#
echo "Executable installed as ~/bincpp/$ARCH/triangulation_boundary_nodes"
