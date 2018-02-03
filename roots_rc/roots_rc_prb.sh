#! /bin/bash
#
g++ -c -I/$HOME/include roots_rc_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling roots_rc_prb.cpp"
  exit
fi
#
g++ roots_rc_prb.o /$HOME/libcpp/$ARCH/roots_rc.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading roots_rc_prb.o."
  exit
fi
#
rm roots_rc_prb.o
#
mv a.out roots_rc_prb
./roots_rc_prb > roots_rc_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running roots_rc_prb."
  exit
fi
rm roots_rc_prb
#
echo "Program output written to roots_rc_prb_output.txt"
