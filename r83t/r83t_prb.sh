#! /bin/bash
#
g++ -c r83t_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83t_prb.cpp."
  exit
fi
#
g++ r83t_prb.o /$HOME/libcpp/$ARCH/r83t.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r83t_prb.o."
  exit
fi
#
rm r83t_prb.o
#
mv a.out r83t_prb
./r83t_prb > r83t_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r83t_prb."
  exit
fi
rm r83t_prb
#
echo "Program output written to r83t_prb_output.txt"
