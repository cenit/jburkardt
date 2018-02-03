#! /bin/bash
#
g++ -c -I/$HOME/include hammersley_advanced_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling hammersley_advanced_prb.cpp"
  exit
fi
#
g++ hammersley_advanced_prb.o /$HOME/libcpp/$ARCH/hammersley_advanced.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading hammersley_advanced_prb.o."
  exit
fi
#
rm hammersley_advanced_prb.o
#
mv a.out hammersley_advanced_prb
./hammersley_advanced_prb > hammersley_advanced_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running hammersley_advanced_prb."
  exit
fi
rm hammersley_advanced_prb
#
echo "Program output written to hammersley_advanced_prb_output.txt"
