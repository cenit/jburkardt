#! /bin/bash
#
g++ -c -I/$HOME/include toms515_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms515_prb.cpp"
  exit
fi
#
g++ -o toms515_prb toms515_prb.o /$HOME/libcpp/$ARCH/toms515.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading toms515_prb.o."
  exit
fi
#
rm toms515_prb.o
#
./toms515_prb > toms515_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running toms515_prb."
  exit
fi
rm toms515_prb
#
echo "Program output written to toms515_prb_output.txt"
