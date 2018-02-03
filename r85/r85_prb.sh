#! /bin/bash
#
g++ -c -I/$HOME/include r85_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r85_prb.cpp"
  exit
fi
#
g++ r85_prb.o /$HOME/libcpp/$ARCH/r85.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r85_prb.o."
  exit
fi
#
rm r85_prb.o
#
mv a.out r85_prb
./r85_prb > r85_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r85_prb."
  exit
fi
rm r85_prb
#
echo "Program output written to r85_prb_output.txt"
