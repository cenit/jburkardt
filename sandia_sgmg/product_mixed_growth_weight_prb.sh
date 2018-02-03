#!/bin/bash
#
g++ -c -I/$HOME/include product_mixed_growth_weight_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling product_mixed_growth_weight_prb.cpp"
  exit
fi
#
g++ product_mixed_growth_weight_prb.o /$HOME/libcpp/$ARCH/sandia_sgmg.o /$HOME/libcpp/$ARCH/sandia_rules2.o /$HOME/libcpp/$ARCH/sandia_rules.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading product_mixed_growth_weight_prb.o."
  exit
fi
#
rm product_mixed_growth_weight_prb.o
#
mv a.out product_mixed_growth_weight_prb
./product_mixed_growth_weight_prb > product_mixed_growth_weight_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running product_mixed_growth_weight_prb."
  exit
fi
rm product_mixed_growth_weight_prb
#
echo "Program output written to product_mixed_growth_weight_prb_output.txt"
