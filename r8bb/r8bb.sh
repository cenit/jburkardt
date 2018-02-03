#! /bin/bash
#
cp r8bb.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8bb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8bb.cpp"
  exit
fi
#
mv r8bb.o ~/libcpp/$ARCH/r8bb.o
#
echo "Library installed as ~/libcpp/$ARCH/r8bb.o"
