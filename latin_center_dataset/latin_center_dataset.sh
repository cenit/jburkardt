#!/bin/bash
#
g++ -c -I$HOME/include latin_center_dataset.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling latin_center_dataset.cpp"
  exit
fi
#
g++ latin_center_dataset.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading latin_center_dataset.o."
  exit
fi
#
rm latin_center_dataset.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/latin_center_dataset
#
echo "Executable installed as ~/bincpp/$ARCH/latin_center_dataset"
