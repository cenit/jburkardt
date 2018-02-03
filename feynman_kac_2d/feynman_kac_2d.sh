#!/bin/bash
#
g++ -c feynman_kac_2d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling feynman_kac_2d.cpp"
  exit
fi
#
g++ feynman_kac_2d.o
if [ $? -ne 0 ]; then
  echo "Errors loading feynman_kac_2d.o"
  exit
fi
#
rm feynman_kac_2d.o
mv a.out feynman_kac_2d
./feynman_kac_2d > feynman_kac_2d_output.txt
rm feynman_kac_2d
#
echo "Program output written to feynman_kac_2d_output.txt"
