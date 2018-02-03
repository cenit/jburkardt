#!/bin/bash
#
g++ -c pyramid_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pyramid_rule.cpp"
  exit
fi
#
g++ pyramid_rule.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading pyramid_rule.o"
  exit
fi
rm pyramid_rule.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/pyramid_rule
#
echo "Executable installed as ~/bincpp/$ARCH/pyramid_rule"
