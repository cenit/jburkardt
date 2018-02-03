#!/bin/bash
#
g++ -c tiler_3d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling tiler_3d.cpp"
  exit
fi
#
g++ tiler_3d.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading tiler_3d.o."
  exit
fi
#
rm tiler_3d.o
mv a.out ~/bincpp/$ARCH/tiler_3d
#
echo "A new version of tiler_3d has been created."
