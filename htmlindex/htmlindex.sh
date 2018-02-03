#! /bin/bash
#
g++.mdindex.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling.mdindex.cpp"
  exit
fi
#
mv a.out ~/bin.mdindex
#
echo "Normal end of execution."
