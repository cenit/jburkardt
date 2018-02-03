#!/bin/bash
#
g++ -c -I/$HOME/include lattice_rule_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lattice_rule_prb.cpp"
  exit
fi
#
g++ lattice_rule_prb.o /$HOME/libcpp/$ARCH/lattice_rule.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading lattice_rule_prb.o."
  exit
fi
#
rm lattice_rule_prb.o
#
mv a.out lattice_rule_prb
./lattice_rule_prb > lattice_rule_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running lattice_rule_prb."
  exit
fi
rm lattice_rule_prb
#
echo "Program output written to lattice_rule_prb_output.txt"
