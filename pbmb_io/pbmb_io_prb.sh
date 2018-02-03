#! /bin/bash
#
g++ -c -I/$HOME/include pbmb_io_prb.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
g++ pbmb_io_prb.o /$HOME/libcpp/pbmb_io.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm pbmb_io_prb.o
#
mv a.out pbmb_io_prb
./pbmb_io_prb > pbmb_io_prb.txt
if [ $? -ne 0 ]; then
  echo "Run errors."
  exit
fi
rm pbmb_io_prb
#
echo "Normal end of execution."
