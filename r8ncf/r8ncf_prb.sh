#! /bin/bash
#
g++ -c -I/$HOME/include r8ncf_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ncf_prb.cpp"
  exit
fi
#
g++ r8ncf_prb.o /$HOME/libcpp/$ARCH/r8ncf.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8ncf_prb.o."
  exit
fi
#
rm r8ncf_prb.o
#
mv a.out r8ncf_prb
./r8ncf_prb > r8ncf_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8ncf_prb."
  exit
fi
rm r8ncf_prb
#
echo "Program output written to r8ncf_prb_output.txt"
