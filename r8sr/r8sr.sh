#! /bin/bash
#
cp r8sr.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8sr.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sr.cpp"
  exit
fi
#
mv r8sr.o ~/libcpp/$ARCH/r8sr.o
#
echo "Library installed as ~/libcpp/$ARCH/r8sr.o"
