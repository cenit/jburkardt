#! /bin/bash
#
g++ -c -I/$HOME/include owens_prb.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
g++ owens_prb.o /$HOME/libcpp/owens.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm owens_prb.o
#
mv a.out owens_prb
./owens_prb > owens_prb.txt
if [ $? -ne 0 ]; then
  echo "Runtime errors."
  exit
fi
rm owens_prb
#
echo "Normal end of execution."
