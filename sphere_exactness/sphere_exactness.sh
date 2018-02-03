#!/bin/bash
#
g++ -c sphere_exactness.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sphere_exactness.cpp"
  exit
fi
#
g++ sphere_exactness.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sphere_exactness.o"
  exit
fi
rm sphere_exactness.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/sphere_exactness
#
echo "Program installed as ~/bincpp/$ARCH/sphere_exactness"
