#! /bin/bash
#
cp toms515.hpp /$HOME/include
#
g++ -c -I/$HOME/include toms515.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms515.cpp"
  exit
fi
#
mv toms515.o ~/libcpp/$ARCH/toms515.o
#
echo "Library installed as ~/libcpp/$ARCH/toms515.o"
