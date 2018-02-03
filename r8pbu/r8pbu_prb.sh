#! /bin/bash
#
g++ -c -I/$HOME/include r8pbu_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8pbu_prb.cpp"
  exit
fi
#
g++ r8pbu_prb.o /$HOME/libcpp/$ARCH/r8pbu.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8pbu_prb.o."
  exit
fi
#
rm r8pbu_prb.o
#
mv a.out r8pbu_prb
./r8pbu_prb > r8pbu_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8pbu_prb."
  exit
fi
rm r8pbu_prb
#
echo "Program output written to r8pbu_prb_output.txt"
