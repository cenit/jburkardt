#!/bin/bash
#
g++ -c -I$HOME/include power_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling power_rule.cpp"
  exit
fi
#
g++ power_rule.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading power_rule.o."
  exit
fi
#
rm power_rule.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/power_rule
#
echo "Executable installed as ~/bincpp/$ARCH/power_rule"
