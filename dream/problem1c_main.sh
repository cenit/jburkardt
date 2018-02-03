#!/bin/bash
#
g++ -c -I/$HOME/include problem1c_main.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling problem1c_main.cpp"
  exit
fi

#
g++ -c -I/$HOME/include problem1c.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling problem1c.cpp"
  exit
fi
#
g++ -c -I/$HOME/include problem1c_covariance.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling problem1c_covariance.cpp"
  exit
fi
#
g++ problem1c_main.o \
    problem1c.o \
    problem1c_covariance.o \
  /$HOME/libcpp/pdflib.o \
  /$HOME/libcpp/rnglib.o \
  -lm
if [ $? -ne 0 ]; then
  echo "Errors loading problem1c_covariance.o + pdflib.o + rnglib.o"
  exit
fi
#
rm problem1c_main.o
rm problem1c.o
rm problem1c_covariance.o
#
mv a.out problem1c_main
./problem1c_main > problem1c_main_output.txt
rm problem1c_main
#
echo "Program output written to problem1c_main_output.txt"
