#! /bin/bash
#
cp toms917.hpp /$HOME/include
#
g++ -c -std=gnu++0x -I/$HOME/include toms917.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms917.cpp"
  exit
fi
#
mv toms917.o ~/libcpp/$ARCH/toms917.o
#
echo "Library installed as ~/libcpp/$ARCH/toms917.o"
