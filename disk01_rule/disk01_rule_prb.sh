#! /bin/bash
#
g++ -c -I/$HOME/include disk01_rule_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling disk01_rule_prb.cpp"
  exit
fi
#
g++ disk01_rule_prb.o /$HOME/libcpp/$ARCH/disk01_rule.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading disk01_rule_prb.o."
  exit
fi
#
rm disk01_rule_prb.o
#
mv a.out disk01_rule_prb
./disk01_rule_prb > disk01_rule_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running disk01_rule_prb."
  exit
fi
rm disk01_rule_prb
#
echo "Program output written to disk01_rule_prb_output.txt"
