#! /bin/bash
#
cp r8sd.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8sd.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sd.cpp"
  exit
fi
#
mv r8sd.o ~/libcpp/$ARCH/r8sd.o
#
echo "Library installed as ~/libcpp/$ARCH/r8sd.o"
