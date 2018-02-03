#!/bin/bash
#
g++ -c -I$HOME/include ppmb_to_ppma.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ppmb_to_ppma.cpp"
  exit
fi
#
g++ ppmb_to_ppma.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading ppmb_to_ppma.o"
  exit
fi
#
rm ppmb_to_ppma.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/ppmb_to_ppma
#
echo "A new version of ppmb_to_ppma has been created."
