#! /bin/bash
#
cp r8bto.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8bto.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8bto.cpp"
  exit
fi
#
mv r8bto.o ~/libcpp/$ARCH/r8bto.o
#
echo "Library installed as ~/libcpp/$ARCH/r8bto.o"
