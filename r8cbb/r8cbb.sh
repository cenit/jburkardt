#! /bin/bash
#
cp r8cbb.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8cbb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8cbb.cpp"
  exit
fi
#
mv r8cbb.o ~/libcpp/$ARCH/r8cbb.o
#
echo "Library installed as ~/libcpp/$ARCH/r8cbb.o"
