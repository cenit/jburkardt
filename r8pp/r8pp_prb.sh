#! /bin/bash
#
g++ -c -I/$HOME/include r8pp_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8pp_prb.cpp"
  exit
fi
#
g++ r8pp_prb.o /$HOME/libcpp/$ARCH/r8pp.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8pp_prb.o."
  exit
fi
#
rm r8pp_prb.o
#
mv a.out r8pp_prb
./r8pp_prb > r8pp_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8pp_prb."
  exit
fi
rm r8pp_prb
#
echo "Program output written to r8pp_prb_output.txt"
