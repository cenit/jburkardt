#! /bin/bash
#
cp r8cb.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8cb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8cb.cpp"
  exit
fi
#
mv r8cb.o ~/libcpp/$ARCH/r8cb.o
#
echo "Library installed as ~/libcpp/$ARCH/r8cb.o"
