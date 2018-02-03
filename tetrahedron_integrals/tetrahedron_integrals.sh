#!/bin/bash
#
cp tetrahedron_integrals.hpp /$HOME/include
#
g++ -c -I /$HOME/include tetrahedron_integrals.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling tetrahedron_integrals.cpp"
  exit
fi
#
mv tetrahedron_integrals.o ~/libcpp/$ARCH/tetrahedron_integrals.o
#
echo "Library installed as ~/libcpp/$ARCH/tetrahedron_integrals.o"
