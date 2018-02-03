#!/bin/bash
#
g++ -c fem3d_project.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem3d_project.cpp"
  exit
fi
#
g++ fem3d_project.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading fem3d_project.o."
  exit
fi
#
rm fem3d_project.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/fem3d_project
#
echo "Executable installed as ~/bincpp/$ARCH/fem3d_project"
