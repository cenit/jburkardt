#! /bin/bash
#
cp r8ncf.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8ncf.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ncf.cpp"
  exit
fi
#
mv r8ncf.o ~/libcpp/$ARCH/r8ncf.o
#
echo "Library installed as ~/libcpp/$ARCH/r8ncf.o"
