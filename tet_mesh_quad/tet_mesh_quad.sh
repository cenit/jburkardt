#!/bin/bash
#
g++ -c tet_mesh_quad.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling tet_mesh_quad.cpp"
  exit
fi
#
g++ tet_mesh_quad.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading tet_mesh_quad.o."
  exit
fi
#
rm tet_mesh_quad.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/tet_mesh_quad
#
echo "Executable installed as ~/bincpp/$ARCH/tet_mesh_quad"
