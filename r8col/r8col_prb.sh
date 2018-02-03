#! /bin/bash
#
g++ -c -I/$HOME/include r8col_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8col_prb.cpp"
  exit
fi
#
g++ r8col_prb.o /$HOME/libcpp/$ARCH/r8col.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8col_prb.o"
  exit
fi
#
rm r8col_prb.o
#
mv a.out r8col_prb
./r8col_prb > r8col_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8col_prb."
  exit
fi
rm r8col_prb
#
echo "Program output written to r8col_prb_output.txt"
