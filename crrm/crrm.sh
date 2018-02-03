#!/bin/sh
#
g++ -c crrm.cpp
if [ $? -ne 0 ]; then
  echo "There were errors while compiling crrm.cpp"
  exit
fi
#
g++ crrm.o
if [ $? -ne 0 ]; then
  echo "There were errors while loading crrm.o."
  exit
fi
#
rm crrm.o
mv a.out ~/bincpp/$ARCH/crrm
#
echo "Executable installed as ~/bincpp/$ARCH/crrm"
