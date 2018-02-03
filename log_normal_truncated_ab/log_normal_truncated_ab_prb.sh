#! /bin/bash
#
g++ -c -I/$HOME/include log_normal_truncated_ab_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling log_normal_truncated_ab_prb.cpp"
  exit
fi
#
g++ -o log_normal_truncated_ab_prb log_normal_truncated_ab_prb.o /$HOME/libcpp/$ARCH/log_normal_truncated_ab.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading log_normal_truncated_ab_prb.o."
  exit
fi
#
rm log_normal_truncated_ab_prb.o
#
./log_normal_truncated_ab_prb > log_normal_truncated_ab_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running log_normal_truncated_ab_prb."
  exit
fi
rm log_normal_truncated_ab_prb
#
echo "Program output written to log_normal_truncated_ab_prb_output.txt"
