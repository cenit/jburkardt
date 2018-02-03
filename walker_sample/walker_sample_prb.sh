#! /bin/bash
#
g++ -c -I/$HOME/include walker_sample_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling walker_sample_prb.cpp"
  exit
fi
#
g++ -o walker_sample_prb walker_sample_prb.o /$HOME/libcpp/$ARCH/walker_sample.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading walker_sample_prb.o."
  exit
fi
#
rm walker_sample_prb.o
#
./walker_sample_prb > walker_sample_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running walker_sample_prb."
  exit
fi
rm walker_sample_prb
#
echo "Program output written to walker_sample_prb_output.txt"
