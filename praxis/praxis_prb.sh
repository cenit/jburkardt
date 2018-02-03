#! /bin/bash
#
g++ -c -I/$HOME/include praxis_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling praxis_prb.cpp"
  exit
fi
#
g++ -o praxis_prb praxis_prb.o /$HOME/libcpp/$ARCH/praxis.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading praxis_prb.o."
  exit
fi
#
rm praxis_prb.o
#
./praxis_prb > praxis_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running praxis_prb."
  exit
fi
rm praxis_prb
#
echo "Program output written to praxis_prb_output.txt"
