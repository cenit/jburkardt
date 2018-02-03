#! /bin/bash
#
g++ -c -I/$HOME/include toms097_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms097_prb.cpp"
  exit
fi
#
g++ toms097_prb.o /$HOME/libcpp/$ARCH/toms097.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading toms097_prb.o."
  exit
fi
#
rm toms097_prb.o
#
mv a.out toms097_prb
./toms097_prb > toms097_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running toms097_prb."
  exit
fi
rm toms097_prb
#
echo "Program output written to toms097_prb_output.txt"
