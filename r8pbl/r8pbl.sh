#! /bin/bash
#
cp r8pbl.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8pbl.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8pbl.cpp"
  exit
fi
#
mv r8pbl.o ~/libcpp/$ARCH/r8pbl.o
#
echo "Library installed as ~/libcpp/$ARCH/r8pbl.o"
