#!/bin/bash
#
g++ -c clenshaw_curtis_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling clenshaw_curtis_rule.cpp"
  exit
fi
#
g++ clenshaw_curtis_rule.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading clenshaw_curtis_rule.o"
  exit
fi
rm clenshaw_curtis_rule.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/clenshaw_curtis_rule
#
echo "Executable installed as ~/bincpp/$ARCH/clenshaw_curtis_rule"
