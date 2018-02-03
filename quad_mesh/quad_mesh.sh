#!/bin/bash
#
cp quad_mesh.hpp /$HOME/include
#
g++ -c -I /$HOME/include quad_mesh.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling quad_mesh.cpp"
  exit
fi
#
mv quad_mesh.o ~/libcpp/$ARCH/quad_mesh.o
#
echo "Library installed as ~/libcpp/$ARCH/quad_mesh.o"
