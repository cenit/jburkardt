#! /bin/bash
#
cp random_sorted.hpp /$HOME/include
#
g++ -c -I/$HOME/include random_sorted.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling random_sorted.cpp"
  exit
fi
#
mv random_sorted.o ~/libcpp/$ARCH/random_sorted.o
#
echo "Library installed as ~/libcpp/$ARCH/random_sorted.o"
