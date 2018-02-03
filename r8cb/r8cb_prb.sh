#! /bin/bash
#
g++ -c -I/$HOME/include r8cb_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8cb_prb.cpp"
  exit
fi
#
g++ r8cb_prb.o /$HOME/libcpp/$ARCH/r8cb.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8cb_prb.o."
  exit
fi
#
rm r8cb_prb.o
#
mv a.out r8cb_prb
./r8cb_prb > r8cb_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8cb_prb."
  exit
fi
rm r8cb_prb
#
echo "Program output written to r8cb_prb_output.txt"
