#!/bin/bash
#
cp svd_snowfall.hpp /$HOME/include
#
g++ -c -I /$HOME/include svd_snowfall.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling svd_snowfall.cpp"
  exit
fi
#
mv svd_snowfall.o ~/libcpp/$ARCH/svd_snowfall.o
#
echo "Library installed as ~/libcpp/$ARCH/svd_snowfall.o"
