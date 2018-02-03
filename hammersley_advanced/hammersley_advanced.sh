#! /bin/bash
#
cp hammersley_advanced.hpp /$HOME/include
#
g++ -c -I /$HOME/include hammersley_advanced.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling hammersley_advanced.cpp"
  exit
fi
#
mv hammersley_advanced.o ~/libcpp/$ARCH/hammersley_advanced.o
#
echo "Library installed as ~/libcpp/$ARCH/hammersley_advanced.o"
