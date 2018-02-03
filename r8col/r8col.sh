#! /bin/bash
#
cp r8col.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8col.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8col.cpp"
  exit
fi
#
mv r8col.o ~/libcpp/$ARCH/r8col.o
#
echo "Library installed as ~/libcpp/$ARCH/r8col.o"
