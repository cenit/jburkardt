#! /bin/bash
#
cp r8sm.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8sm.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sm.cpp"
  exit
fi
#
mv r8sm.o ~/libcpp/$ARCH/r8sm.o
#
echo "Library installed as ~/libcpp/$ARCH/r8sm.o"
