#!/bin/bash
#
g++ -c tet_mesh_quality.cpp
if [ $? -ne 0 ]; then
  echo "Error compiling tet_mesh_quality.cpp"
  exit
fi
#
g++ tet_mesh_quality.o -lm
if [ $? -ne 0 ]; then
  echo "Error loading tet_mesh_quality.o
  exit
fi
rm tet_mesh_quality.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/tet_mesh_quality
#
echo "Program installed as ~/bincpp/$ARCH/tet_mesh_quality"
