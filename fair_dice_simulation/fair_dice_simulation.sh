#!/bin/bash
#
g++ -c fair_dice_simulation.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fair_dice_simulation.cpp"
  exit
fi
#
g++ fair_dice_simulation.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading fair_dice_simulation.o"
  exit
fi
rm fair_dice_simulation.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/fair_dice_simulation
#
echo "Executable installed as ~/bincpp/$ARCH/fair_dice_simulation"
