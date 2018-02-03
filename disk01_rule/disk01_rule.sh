#! /bin/bash
#
cp disk01_rule.hpp /$HOME/include
#
g++ -c -I/$HOME/include disk01_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling disk01_rule.cpp"
  exit
fi
#
mv disk01_rule.o ~/libcpp/$ARCH/disk01_rule.o
#
echo "Library installed as ~/libcpp/$ARCH/disk01_rule.o"
