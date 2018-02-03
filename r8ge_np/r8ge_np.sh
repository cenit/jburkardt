#! /bin/bash
#
cp r8ge_np.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8ge_np.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ge_np.cpp"
  exit
fi
#
mv r8ge_np.o ~/libcpp/$ARCH/r8ge_np.o
#
echo "Library installed as ~/libcpp/$ARCH/r8ge_np.o"
