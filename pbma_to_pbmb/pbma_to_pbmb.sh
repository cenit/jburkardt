#! /bin/bash
#
g++ -c -I$HOME/include pbma_to_pbmb.cpp
if [ $? -ne 0 ]; then
  echo "Compile errors."
  exit
fi
#
g++ pbma_to_pbmb.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
rm pbma_to_pbmb.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/pbma_to_pbmb
#
echo "Normal end of execution."
