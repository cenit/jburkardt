#! /bin/bash
#
cp roots_rc.hpp /$HOME/include
#
g++ -c -I/$HOME/include roots_rc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling roots_rc.cpp"
  exit
fi
#
mv roots_rc.o ~/libcpp/$ARCH/roots_rc.o
#
echo "Library installed as ~/libcpp/$ARCH/roots_rc.o"
