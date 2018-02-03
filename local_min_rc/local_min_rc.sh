#! /bin/bash
#
cp local_min_rc.hpp /$HOME/include
#
g++ -c -I /$HOME/include local_min_rc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling local_min_rc.cpp"
  exit
fi
#
mv local_min_rc.o ~/libcpp/$ARCH/local_min_rc.o
#
echo "Library installed as ~/libcpp/$ARCH/local_min_rc.o"
