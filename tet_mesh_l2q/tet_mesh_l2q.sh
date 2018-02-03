#!/bin/bash
#
g++ -c tet_mesh_l2q.cpp
if [ $? -ne 0 ]; then
  echo "Compilation error."
  exit
fi
#
g++ tet_mesh_l2q.o -lm
if [ $? -ne 0 ]; then
  echo "Load error."
  exit
fi
rm tet_mesh_l2q.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/tet_mesh_l2q
#
echo "Normal end of execution."
