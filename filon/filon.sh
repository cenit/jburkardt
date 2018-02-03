#!/bin/bash
#
cp filon.hpp /$HOME/include
#
g++ -c -I/$HOME/include filon.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling filon.cpp"
  exit
fi
#
mv filon.o ~/libcpp/$ARCH/filon.o
#
echo "Library installed as ~/libcpp/$ARCH/filon.o"
