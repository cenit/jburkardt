#!/bin/bash
#
g++ -c laguerre_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling laguerre_rule.cpp"
  exit
fi
#
g++ laguerre_rule.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading laguerre_rule.o"
  exit
fi
rm laguerre_rule.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/laguerre_rule
#
echo "Executable installed as ~/bincpp/$ARCH/laguerre_rule"
