#! /bin/bash
#
cp toms112.hpp /$HOME/include
#
gcc -c toms112.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms112.cpp."
  exit
fi
#
mv toms112.o ~/libcpp/$ARCH/toms112.o
#
echo "Library installed as ~/libcpp/$ARCH/toms112.o"
