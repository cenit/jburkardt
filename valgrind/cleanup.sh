#!/bin/bash
#
if [ -e test01 ]
then
  rm test01
fi
#
if [ -e test01.dSYM ]
then
  rm -r test01.dSYM
fi
#
if [ -e test02 ]
then
  rm test02
fi
#
if [ -e test02.dSYM ]
then
  rm -r test02.dSYM
fi

