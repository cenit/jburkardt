#! /bin/bash
#
cp clausen.hpp /$HOME/include
#
g++ -c -I /$HOME/include clausen.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling clausen.cpp"
  exit
fi
#
mv clausen.o ~/libcpp/$ARCH/clausen.o
#
echo "Library installed as ~/libcpp/$ARCH/clausen.o"
