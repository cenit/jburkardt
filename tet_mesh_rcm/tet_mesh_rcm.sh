#!/bin/bash
#
g++ -c tet_mesh_rcm.cpp
if [ $? -ne 0 ]; then
  echo "Error compiling tet_mesh_rcm.cpp"
  exit
fi
#
g++ tet_mesh_rcm.o -lm
if [ $? -ne 0 ]; then
  echo "Error loading tet_mesh_rcm.o"
  exit
fi
rm tet_mesh_rcm.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/tet_mesh_rcm
#
echo "Executable installed as ~/bincp/$ARCH/tet_mesh_rcm"
