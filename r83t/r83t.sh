#! /bin/bash
#
cp r83t.hpp /$HOME/include
#
g++ -c r83t.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83t.cpp."
  exit
fi
#
mv r83t.o ~/libcpp/$ARCH/r83t.o
#
echo "Library installed as ~/libcpp/$ARCH/r83t.o"
