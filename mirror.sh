#!/bin/bash

wget -r -np -l 2 http://people.sc.fsu.edu/~jburkardt/cpp_src/
mv people.sc.fsu.edu/~jburkardt/cpp_src/* .
rm -rf people.sc.fsu.edu
find . -name "*C=*" -exec rm -f {} \;
for file in $(find . -name "*.html" -type f) ; do pandoc "$file" -o "$(dirname "$file")/$(basename "$file" .html).md" ; done
find . -name "*.html" -exec rm -f {} \;
find . -name "index.md" -exec rm -f {} \;
ln -s cpp_src.md README.md
git grep -lz '.html' | xargs -0 perl -i'' -pE "s/.html/.md/g"
git grep -lz '/cpp_src/' | xargs -0 perl -i'' -pE "s/\/cpp_src\//\/master\//g"
find . -name "*.o" -exec git rm -f {} \;
