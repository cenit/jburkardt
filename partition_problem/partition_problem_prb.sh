#!/bin/bash
#
g++ -c -I/$HOME/include partition_problem_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling partition_problem_prb.cpp"
  exit
fi
#
g++ partition_problem_prb.o /$HOME/libcpp/$ARCH/partition_problem.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading partition_problem_prb.o"
  exit
fi
#
rm partition_problem_prb.o
#
mv a.out partition_problem_prb
./partition_problem_prb > partition_problem_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running partition_problem_prb."
  exit
fi
rm partition_problem_prb
#
echo "Program output written to partition_problem_prb_output.txt"
