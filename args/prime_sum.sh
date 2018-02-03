#!/bin/bash
#
g++ -c prime_sum.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling prime_sum.cpp"
  exit
fi
#
g++ prime_sum.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading prime_sum.o"
  exit
fi
#
rm prime_sum.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/prime_sum
#
echo "Program installed as ~/bincpp/$ARCH/prime_sum"
