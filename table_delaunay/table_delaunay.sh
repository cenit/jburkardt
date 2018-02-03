#!/bin/bash
#
g++ -c table_delaunay.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling table_delaunay.cpp"
  exit
fi
#
g++ table_delaunay.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading table_delaunay.o."
  exit
fi
#
rm table_delaunay.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/table_delaunay
#
echo "Executable installed as ~/bincpp/$ARCH/table_delaunay"
