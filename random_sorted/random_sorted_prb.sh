#! /bin/bash
#
g++ -c -I/$HOME/include random_sorted_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling random_sorted_prb.cpp"
  exit
fi
#
g++ -o random_sorted_prb random_sorted_prb.o /$HOME/libcpp/$ARCH/random_sorted.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading random_sorted_prb.o."
  exit
fi
#
rm random_sorted_prb.o
#
./random_sorted_prb > random_sorted_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running random_sorted_prb."
  exit
fi
rm random_sorted_prb
#
echo "Program output written to random_sorted_prb_output.txt"
