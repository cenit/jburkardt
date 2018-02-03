#! /bin/bash
#
cp log_normal_truncated_ab.hpp /$HOME/include
#
g++ -c -I/$HOME/include log_normal_truncated_ab.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling log_normal_truncated_ab.cpp"
  exit
fi
#
mv log_normal_truncated_ab.o ~/libcpp/$ARCH/log_normal_truncated_ab.o
#
echo "Library installed as ~/libcpp/$ARCH/log_normal_truncated_ab.o"
