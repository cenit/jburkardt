#! /bin/bash
#
cp halton_advanced.hpp /$HOME/include
#
g++ -c -I /$HOME/include halton_advanced.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling halton_advanced.cpp"
  exit
fi
#
mv halton_advanced.o ~/libcpp/$ARCH/halton_advanced.o
#
echo "Library installed as ~/libcpp/$ARCH/halton_advanced.o"
