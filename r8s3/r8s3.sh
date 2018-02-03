#!/bin/bash
#
cp r8s3.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8s3.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8s3.cpp"
  exit
fi
#
mv r8s3.o ~/libcpp/$ARCH/r8s3.o
#
echo "Library installed as ~/libcpp/$ARCH/r8s3.o"
