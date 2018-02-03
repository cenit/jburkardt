#!/bin/bash
#
#cp r8lib.hpp /$HOME/include
#
g++ -c -I /$HOME/include fejer2.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fejer2.cpp"
  exit
fi
#
g++ -c -I /$HOME/include fftpack.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fftpack.cpp"
  exit
fi
#
g++ -c -I /$HOME/include gaussqr.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gaussqr.cpp"
  exit
fi
#
g++ -c -I /$HOME/include lanczos.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lanczos.cpp"
  exit
fi
#
g++ -c -I /$HOME/include mtqli.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling mtqli.cpp"
  exit
fi
#
ar qc libgaussqr.a *.o
rm *.o
mv libgaussqr.a ~/libcpp/$ARCH/libgaussqr.a
#
echo "Library installed as ~/libcpp/$ARCH/libgaussqr.a"
