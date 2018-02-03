#! /bin/bash
#
cp hilbert_curve.hpp /$HOME/include
#
g++ -c -I/$HOME/include hilbert_curve.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling hilbert_curve.cpp"
  exit
fi
#
mv hilbert_curve.o ~/libcpp/$ARCH/hilbert_curve.o
#
echo "Library installed as ~/libcpp/$ARCH/hilbert_curve.o"
