#!/bin/bash
#
g++ -c -I$HOME/include pgmb_to_pgma.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pgmb_to_pgma.cpp"
  exit
fi
#
g++ pgmb_to_pgma.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading pgmb_to_pgma.o"
  exit
fi
#
rm pgmb_to_pgma.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/pgmb_to_pgma
#
echo "Executable installed as ~/bincpp/$ARCH/pgmb_to_pgma"
