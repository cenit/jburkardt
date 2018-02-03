#! /bin/bash
#
cp r83_np.hpp /$HOME/include
#
g++ -c -I /$HOME/include r83_np.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83_np.cpp"
  exit
fi
#
mv r83_np.o ~/libcpp/$ARCH/r83_np.o
#
echo "Library installed as ~/libcpp/$ARCH/r83_np.o"
