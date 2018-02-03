#!/bin/bash
#
g++ -c -I/$HOME/include alpert_rule_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling alpert_rule_prb.cpp"
  exit
fi
#
g++ -o alpert_rule_prb alpert_rule_prb.o /$HOME/libcpp/$ARCH/alpert_rule.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading alpert_rule_prb.o."
  exit
fi
#
rm alpert_rule_prb.o
#
./alpert_rule_prb > alpert_rule_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running alpert_rule_prb."
  exit
fi
rm alpert_rule_prb
#
echo "Program output written to alpert_rule_prb_output.txt"
