#!/bin/bash
#
cp mpi_stubs.hpp $HOME/include
#
g++ -c mpi_stubs.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling mpi_stubs.cpp"
  exit
fi
#
mv mpi_stubs.o ~/libcpp/$ARCH/mpi_stubs.o
#
echo "A new version of mpi_stubs has been created."
