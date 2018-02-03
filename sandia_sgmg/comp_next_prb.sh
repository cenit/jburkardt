#!/bin/bash
#
g++ -c -I/$HOME/include comp_next_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling comp_next_prb.cpp"
  exit
fi
#
g++ comp_next_prb.o /$HOME/libcpp/$ARCH/sandia_sgmg.o /$HOME/libcpp/$ARCH/sandia_rules2.o /$HOME/libcpp/$ARCH/sandia_rules.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading comp_next_prb.o."
  exit
fi
#
rm comp_next_prb.o
#
mv a.out comp_next_prb
./comp_next_prb > comp_next_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running comp_next_prb."
  exit
fi
rm comp_next_prb
#
echo "Program output written to comp_next_prb_output.txt"
