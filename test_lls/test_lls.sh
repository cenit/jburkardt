#! /bin/bash
#
cp test_lls.hpp /$HOME/include
#
g++ -c -I /$HOME/include test_lls.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_lls.cpp"
  exit
fi
#
mv test_lls.o ~/libcpp/$ARCH/test_lls.o
#
echo "Library installed as ~/libcpp/$ARCH/test_lls.o"
