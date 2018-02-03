#! /bin/bash
#
g++ -c -I/$HOME/include r8gd_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8gd_prb.cpp"
  exit
fi
#
g++ r8gd_prb.o /$HOME/libcpp/$ARCH/r8gd.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8gd_prb.o."
  exit
fi
#
rm r8gd_prb.o
#
mv a.out r8gd_prb
./r8gd_prb > r8gd_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8gd_prb."
  exit
fi
rm r8gd_prb
#
echo "Program output written to r8gd_prb_output.txt"
