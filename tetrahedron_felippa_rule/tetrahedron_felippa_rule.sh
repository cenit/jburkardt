#!/bin/bash
#
cp tetrahedron_felippa_rule.hpp /$HOME/include
#
g++ -c -I /$HOME/include tetrahedron_felippa_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling tetrahedron_felippa_rule.cpp"
  exit
fi
#
mv tetrahedron_felippa_rule.o ~/libcpp/$ARCH/tetrahedron_felippa_rule.o
#
echo "Library installed as ~/libcpp/$ARCH/tetrahedron_felippa_rule.o"
