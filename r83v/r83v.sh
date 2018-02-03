#! /bin/bash
#
cp r83v.hpp /$HOME/include
#
g++ -c -I/$HOME/include r83v.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83v.cpp"
  exit
fi
#
mv r83v.o ~/libcpp/$ARCH/r83v.o
#
echo "Library installed as ~/libcpp/$ARCH/r83v.o"
