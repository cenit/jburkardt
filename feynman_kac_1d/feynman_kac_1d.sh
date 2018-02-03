#!/bin/bash
#
g++ -c feynman_kac_1d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling feynman_kac_1d.cpp"
  exit
fi
#
g++ feynman_kac_1d.o
if [ $? -ne 0 ]; then
  echo "Errors loading feynman_kac_1d.o"
  exit
fi
#
rm feynman_kac_1d.o
mv a.out feynman_kac_1d
./feynman_kac_1d > feynman_kac_1d_output.txt
rm feynman_kac_1d
#
echo "Program output written to feynman_kac_1d_output.txt"
