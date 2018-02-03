#! /bin/bash
#
g++ -c histogram_data_2d_sample.cpp
if [ $? -ne 0 ]; then
  echo "Errors while compiling histogram_data_2d_sample.cpp"
  exit
fi
#
g++ histogram_data_2d_sample.o
if [ $? -ne 0 ]; then
  echo "Errors while loading histogram_data_2d_sample.o"
  exit
fi
rm histogram_data_2d_sample.o
#
mv a.out ~/bincpp/$ARCH/histogram_data_2d_sample
#
echo "Executable installed as ~/bincpp/$ARCH/histogram_data_2d_sample"
