#! /bin/bash
#
g++ -c -I/$HOME/include root_rc_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling root_rc_prb.cpp"
  exit
fi
#
g++ root_rc_prb.o /$HOME/libcpp/$ARCH/root_rc.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading root_rc_prb.o."
  exit
fi
#
rm root_rc_prb.o
#
mv a.out root_rc_prb
./root_rc_prb > root_rc_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running root_rc_prb."
  exit
fi
rm root_rc_prb
#
echo "Program output written to root_rc_prb_output.txt"
