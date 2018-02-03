#! /bin/bash
#
g++ -c -I/$HOME/include toms917_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms917_prb.cpp"
  exit
fi
#
g++ -o toms917_prb toms917_prb.o /$HOME/libcpp/$ARCH/toms917.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading toms917_prb.o."
  exit
fi
#
rm toms917_prb.o
#
./toms917_prb > toms917_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running toms917_prb."
  exit
fi
rm toms917_prb
#
echo "Program output written to toms917_prb_output.txt"
