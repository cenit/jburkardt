#! /bin/bash
#
g++ /$HOME/libcpp/partial_digest.o -lm
if [ $? -ne 0 ]; then
  echo "Load errors."
  exit
fi
#
mv a.out partial_digest_test
./partial_digest_test > partial_digest_test.txt
if [ $? -ne 0 ]; then
  echo "Runtime errors."
  exit
fi
rm partial_digest_test
#
echo "Normal end of execution."
