#!/bin/bash
#
g++ -c -I/$HOME/include sgmga_point_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sgmga_point_prb.cpp"
  exit
fi
#
g++ sgmga_point_prb.o /$HOME/libcpp/$ARCH/sgmga.o /$HOME/libcpp/$ARCH/sandia_rules.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sgmga_point_prb.o."
  exit
fi
#
rm sgmga_point_prb.o
#
mv a.out sgmga_point_prb
./sgmga_point_prb > sgmga_point_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sgmga_point_prb."
  exit
fi
rm sgmga_point_prb
#
echo "Program output written to sgmga_point_prb_output.txt"
