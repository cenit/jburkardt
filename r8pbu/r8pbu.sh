#! /bin/bash
#
cp r8pbu.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8pbu.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8pbu.cpp"
  exit
fi
#
mv r8pbu.o ~/libcpp/$ARCH/r8pbu.o
#
echo "Library installed as ~/libcpp/$ARCH/r8pbu.o"
