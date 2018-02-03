#!/bin/bash
#
g++ -c -I$HOME/include pbmb_to_pbma.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pbmb_to_pbma.cpp"
  exit
fi
#
g++ pbmb_to_pbma.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading pbmb_to_pbma.o"
  exit
fi
#
rm pbmb_to_pbma.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/pbmb_to_pbma
#
echo "Executable installed as ~/bincpp/pbmb_to_pbma"
