#!/bin/bash
#
cp cube_integrals.hpp /$HOME/include
#
g++ -c -I /$HOME/include cube_integrals.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cube_integrals.cpp"
  exit
fi
#
mv cube_integrals.o ~/libcpp/$ARCH/cube_integrals.o
#
echo "Library installed as ~/libcpp/$ARCH/cube_integrals.o"
