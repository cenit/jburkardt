#!/bin/bash
#
g++ -c -I$HOME/include nint_exactness_mixed.cpp
if ( $status != 0 ) then
  echo "Errors compiling nint_exactness_mixed.cpp"
  exit
fi
#
g++ nint_exactness_mixed.o -lm
if ( $status != 0 ) then
  echo "Errors linking and loading nint_exactness_mixed.o."
  exit
fi
#
rm nint_exactness_mixed.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/nint_exactness_mixed
#
echo "Executable installed as ~/bincpp/$ARCH/nint_exactness_mixed"
