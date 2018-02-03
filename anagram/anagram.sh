#! /bin/bash
#
g++ -c anagram.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling anagram.cpp."
  exit
fi
#
g++ anagram.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading anagram.o."
  exit
fi
#
rm anagram.o
mv a.out ~/bin/$ARCH/anagram
#
echo "Executable installed as ~/bin/$ARCH/anagram"
