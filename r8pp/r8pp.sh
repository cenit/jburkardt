#! /bin/bash
#
cp r8pp.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8pp.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8pp.cpp"
  exit
fi
#
mv r8pp.o ~/libcpp/$ARCH/r8pp.o
#
echo "Library installed as ~/libcpp/$ARCH/r8pp.o"
