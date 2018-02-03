#! /bin/bash
#
g++ -c toms112_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms112_prb.cpp."
  exit
fi
#
g++ toms112_prb.o /$HOME/libcpp/$ARCH/toms112.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading toms112_prb.o."
  exit
fi
#
rm toms112_prb.o
#
mv a.out toms112_prb
./toms112_prb > toms112_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running toms112_prb."
  exit
fi
rm toms112_prb
#
echo "Output written to toms112_prb_output.txt"
