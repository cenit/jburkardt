#!/bin/bash
#
g++ -c -I $HOME/include linpack_bench_d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling linpack_bench_d.cpp"
  exit
fi
#
g++ linpack_bench_d.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading linpack_bench_d.o."
  exit
fi
#
rm linpack_bench_d.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/linpack_bench_d
#
echo "Executable installed as ~/bincpp/$ARCH/linpack_bench_d."
