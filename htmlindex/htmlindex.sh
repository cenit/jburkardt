#! /bin/bash
#
g++ htmlindex.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling htmlindex.cpp"
  exit
fi
#
mv a.out ~/bin/htmlindex
#
echo "Normal end of execution."
