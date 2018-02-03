#! /bin/bash
#
cp van_der_corput_advanced.hpp /$HOME/include
#
g++ -c -I /$HOME/include van_der_corput_advanced.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling van_der_corput_advanced.cpp"
  exit
fi
#
mv van_der_corput_advanced.o ~/libcpp/$ARCH/van_der_corput_advanced.o
#
echo "Library installed as ~/libcpp/$ARCH/van_der_corput_advanced.o"
