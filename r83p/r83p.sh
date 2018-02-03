#! /bin/bash
#
cp r83p.hpp /$HOME/include
#
g++ -c -I /$HOME/include r83p.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83p.cpp"
  exit
fi
#
mv r83p.o ~/libcpp/$ARCH/r83p.o
#
echo "Library installed as ~/libcpp/$ARCH/r83p.o"
