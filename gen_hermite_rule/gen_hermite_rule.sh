#!/bin/bash
#
g++ -c gen_hermite_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gen_hermite_rule.cpp"
  exit
fi
#
g++ gen_hermite_rule.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading gen_hermite_rule.o"
  exit
fi
rm gen_hermite_rule.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/gen_hermite_rule
#
echo "Executable installed as ~/bincpp/$ARCH/gen_hermite_rule"
