#! /bin/bash
#
cp log_normal.hpp /$HOME/include
#
g++ -c -g -I /$HOME/include log_normal.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling log_normal.cpp"
  exit
fi
#
mv log_normal.o ~/libcpp/$ARCH/log_normal.o
#
echo "Library installed as ~/libcpp/$ARCH/log_normal.o"
