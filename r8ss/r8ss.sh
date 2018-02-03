#! /bin/bash
#
cp r8ss.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8ss.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ss.cpp"
  exit
fi
#
mv r8ss.o ~/libcpp/$ARCH/r8ss.o
#
echo "Library installed as ~/libcpp/$ARCH/r8ss.o"
