#! /bin/bash
#
g++ -c -I/$HOME/include r8sm_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sm_prb.cpp"
  exit
fi
#
g++ r8sm_prb.o /$HOME/libcpp/$ARCH/r8sm.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8sm_prb.o."
  exit
fi
#
rm r8sm_prb.o
#
mv a.out r8sm_prb
./r8sm_prb > r8sm_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8sm_prb."
  exit
fi
rm r8sm_prb
#
echo "Program output written to r8sm_prb_output.txt"
