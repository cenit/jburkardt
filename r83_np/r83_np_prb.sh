#! /bin/bash
#
g++ -c -I/$HOME/include r83_np_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83_np_prb.cpp"
  exit
fi
#
g++ r83_np_prb.o /$HOME/libcpp/$ARCH/r83_np.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r83_np_prb.o."
  exit
fi
#
rm r83_np_prb.o
#
mv a.out r83_np_prb
./r83_np_prb > r83_np_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r83_np_prb."
  exit
fi
rm r83_np_prb
#
echo "Program output written to r83_np_prb_output.txt"
