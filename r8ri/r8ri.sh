#! /bin/bash
#
cp r8ri.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8ri.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ri.cpp"
  exit
fi
#
mv r8ri.o ~/libcpp/$ARCH/r8ri.o
#
echo "Library installed as ~/libcpp/$ARCH/r8ri.o"
