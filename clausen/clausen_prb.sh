#! /bin/bash
#
g++ -c -I/$HOME/include clausen_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling clausen_prb.cpp"
  exit
fi
#
g++ clausen_prb.o /$HOME/libcpp/$ARCH/clausen.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading clausen_prb.o"
  exit
fi
#
rm clausen_prb.o
#
mv a.out clausen_prb
./clausen_prb > clausen_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running clausen_prb."
  exit
fi
rm clausen_prb
#
echo "Program output written to clausen_prb_output.txt"
