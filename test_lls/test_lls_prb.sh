#! /bin/bash
#
g++ -c -I/$HOME/include test_lls_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_lls_prb.cpp"
  exit
fi
#
g++ test_lls_prb.o /$HOME/libcpp/$ARCH/test_lls.o /$HOME/libcpp/$ARCH/r8lib.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading test_lls_prb.o"
  exit
fi
#
rm test_lls_prb.o
#
mv a.out test_lls_prb
./test_lls_prb > test_lls_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running test_lls_prb."
  exit
fi
rm test_lls_prb
#
echo "Program output written to test_lls_prb_output.txt"
