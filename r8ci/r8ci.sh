#! /bin/bash
#
cp r8ci.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8ci.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ci.cpp"
  exit
fi
#
mv r8ci.o ~/libcpp/$ARCH/r8ci.o
#
echo "Library installed as ~/libcpp/$ARCH/r8ci.o"
