#! /bin/bash
#
g++ -c -I/$HOME/include r8bto_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8bto_prb.cpp"
  exit
fi
#
g++ r8bto_prb.o /$HOME/libcpp/$ARCH/r8bto.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8bto_prb.o."
  exit
fi
#
rm r8bto_prb.o
#
mv a.out r8bto_prb
./r8bto_prb > r8bto_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8bto_prb."
  exit
fi
rm r8bto_prb
#
echo "Program output written to r8bto_prb_output.txt"
