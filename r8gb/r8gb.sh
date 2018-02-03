#! /bin/bash
#
cp r8gb.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8gb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8gb.cpp"
  exit
fi
#
mv r8gb.o ~/libcpp/$ARCH/r8gb.o
#
echo "Library installed as ~/libcpp/$ARCH/r8gb.o"
