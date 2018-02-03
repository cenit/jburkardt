#! /bin/bash
#
g++ -c -I/$HOME/include test_eigen_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_eigen_prb.cpp."
  exit
fi
#
g++ test_eigen_prb.o /$HOME/libcpp/test_eigen.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading test_eigen_prb.o."
  exit
fi
#
rm test_eigen_prb.o
#
mv a.out test_eigen_prb
./test_eigen_prb > test_eigen.txt
if [ $? -ne 0 ]; then
  echo "Errors running test_eigen_prb."
  exit
fi
rm test_eigen_prb
#
echo "Normal end of execution."
