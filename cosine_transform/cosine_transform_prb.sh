#!/bin/bash
#
g++ -c -I/$HOME/include cosine_transform_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cosine_transform_prb.cpp"
  exit
fi
#
g++ cosine_transform_prb.o /$HOME/libcpp/$ARCH/cosine_transform.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading cosine_transform_prb.o."
  exit
fi
#
rm cosine_transform_prb.o
#
mv a.out cosine_transform_prb
./cosine_transform_prb > cosine_transform_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running cosine_transform_prb."
  exit
fi
rm cosine_transform_prb
#
echo "Program output written to cosine_transform_prb_output.txt"
