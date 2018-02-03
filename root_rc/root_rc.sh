#! /bin/bash
#
cp root_rc.hpp /$HOME/include
#
g++ -c -I/$HOME/include root_rc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling root_rc.cpp"
  exit
fi
#
mv root_rc.o ~/libcpp/$ARCH/root_rc.o
#
echo "Library installed as ~/libcpp/$ARCH/root_rc.o"
