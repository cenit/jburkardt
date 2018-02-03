#! /bin/bash
#
g++ -c -I/$HOME/include local_min_rc_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling local_min_rc_prb.cpp"
  exit
fi
#
g++ local_min_rc_prb.o /$HOME/libcpp/$ARCH/local_min_rc.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading local_min_rc_prb.o."
  exit
fi
#
rm local_min_rc_prb.o
#
mv a.out local_min_rc_prb
./local_min_rc_prb > local_min_rc_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running local_min_rc_prb."
  exit
fi
rm local_min_rc_prb
#
echo "Program output written to local_min_rc_prb_output.txt"
