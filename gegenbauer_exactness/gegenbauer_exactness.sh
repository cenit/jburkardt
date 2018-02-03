#!/bin/bash
#
g++ -c gegenbauer_exactness.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gegenbauer_exactness.cpp"
  exit
fi
#
g++ gegenbauer_exactness.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading gegenbauer_exactness.o"
  exit
fi
rm gegenbauer_exactness.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/gegenbauer_exactness
#
echo "Executable installed as ~/bincpp/$ARCH/gegenbauer_exactness"
