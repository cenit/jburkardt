#! /bin/bash
#
cp prob.hpp /$HOME/include
#
g++ -c -g -I /$HOME/include prob.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling prob.cpp"
  exit
fi
#
mv prob.o ~/libcpp/$ARCH/prob.o
#
echo "Library installed as ~/libcpp/$ARCH/prob.o"
