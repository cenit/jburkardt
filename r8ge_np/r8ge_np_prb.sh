#! /bin/bash
#
g++ -c -I/$HOME/include r8ge_np_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ge_np_prb.cpp"
  exit
fi
#
g++ r8ge_np_prb.o /$HOME/libcpp/$ARCH/r8ge_np.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8ge_np_prb.o."
  exit
fi
#
rm r8ge_np_prb.o
#
mv a.out r8ge_np_prb
./r8ge_np_prb > r8ge_np_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8ge_np_prb."
  exit
fi
rm r8ge_np_prb
#
echo "Program output written to r8ge_np_prb_output.txt"
