#! /bin/bash
#
cp r85.hpp /$HOME/include
#
g++ -c -I /$HOME/include r85.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r85.cpp"
  exit
fi
#
mv r85.o ~/libcpp/$ARCH/r85.o
#
echo "Library installed as ~/libcpp/$ARCH/r85.o"
