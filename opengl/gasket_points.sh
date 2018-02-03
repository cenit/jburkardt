#!/bin/bash
#
g++ -c gasket_points.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gasket_points.cpp"
  exit
fi
#
#  Here is the load statement for Apple's OS X.
#
g++ gasket_points.o -lm -framework GLUT -framework OpenGL
#
#  Here is the load statement for a normal UNIX system!
#
# g++ gasket_points.o -lm -lGL -lGLU -lglut
if [ $? -ne 0 ]; then
  echo "Errors linking and loading gasket_points.o"
  exit
fi
#
rm gasket_points.o
mv a.out ~/bincpp/$ARCH/gasket_points
#
echo "Executable installed as ~/bincpp/$ARCH/gasket_points"
