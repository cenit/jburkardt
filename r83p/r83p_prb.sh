#! /bin/bash
#
g++ -c -I/$HOME/include r83p_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83p_prb.cpp"
  exit
fi
#
g++ r83p_prb.o /$HOME/libcpp/$ARCH/r83p.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r83p_prb.o."
  exit
fi
#
rm r83p_prb.o
#
mv a.out r83p_prb
./r83p_prb > r83p_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r83p_prb."
  exit
fi
rm r83p_prb
#
echo "Program output written to r83p_prb_output.txt"
