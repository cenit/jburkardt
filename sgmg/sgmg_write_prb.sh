#!/bin/bash
#
g++ -c -I/$HOME/include sgmg_write_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sgmg_write_prb.cpp"
  exit
fi
#
g++ sgmg_write_prb.o /$HOME/libcpp/$ARCH/sgmg.o /$HOME/libcpp/$ARCH/sandia_rules.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sgmg_write_prb.o."
  exit
fi
#
rm sgmg_write_prb.o
#
mv a.out sgmg_write_prb
./sgmg_write_prb > sgmg_write_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sgmg_write_prb."
  exit
fi
rm sgmg_write_prb
#
echo "Program output written to sgmg_write_prb_output.txt"
#
#  Move sparse grid files to dataset directory.
#
mv *_n.txt ../../datasets/sgmg
mv *_p.txt ../../datasets/sgmg
mv *_r.txt ../../datasets/sgmg
mv *_w.txt ../../datasets/sgmg
mv *_x.txt ../../datasets/sgmg
#
echo "Program output files moved to ../../datasets/sgmg"
