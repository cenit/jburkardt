#!/bin/bash
#
g++ -c -I/$HOME/include sgmga_weight_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sgmga_weight_prb.cpp"
  exit
fi
#
g++ sgmga_weight_prb.o /$HOME/libcpp/$ARCH/sgmga.o /$HOME/libcpp/$ARCH/sandia_rules.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sgmga_weight_prb.o."
  exit
fi
#
rm sgmga_weight_prb.o
#
mv a.out sgmga_weight_prb
./sgmga_weight_prb > sgmga_weight_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sgmga_weight_prb."
  exit
fi
rm sgmga_weight_prb
#
echo "Program output written to sgmga_weight_prb_output.txt"
