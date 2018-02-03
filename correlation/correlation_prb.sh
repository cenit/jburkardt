#!/bin/bash
#
g++ -c correlation_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling correlation_prb.cpp"
  exit
fi
#
g++ correlation_prb.o ~/libcpp/$ARCH/correlation.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading correlation_prb.o"
  exit
fi
rm correlation_prb.o
#
mv a.out correlation_prb
./correlation_prb > correlation_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running correlation_prb"
  exit
fi
rm correlation_prb
#
echo "Test program output written to correlation_prb_output.txt."
