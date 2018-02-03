#! /bin/bash
#
cp r8gd.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8gd.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8gd.cpp"
  exit
fi
#
mv r8gd.o ~/libcpp/$ARCH/r8gd.o
#
echo "Library installed as ~/libcpp/$ARCH/r8gd.o"
