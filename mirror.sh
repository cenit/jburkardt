#!/bin/bash

# run this script in a new folder to create a mirror of the website ready to be deployed on github
wget -r -np -l 2 http://people.sc.fsu.edu/~jburkardt/master/
mv people.sc.fsu.edu/~jburkardt/master/* .
rm -rf people.sc.fsu.edu
find . -name "*C=*" -exec rm -f {} \;
## the following two lines will be modified by the script itself after running, inserting "markdown extension" (written extended to preserve at least the comment) also where "hypertext markup language extension" should be written!!
for file in $(find . -name "*.html" -type f) ; do pandoc "$file" -o "$(dirname "$file")/$(basename "$file" .html).md" ; done
find . -name "*.html" -exec rm -f {} \;
find . -name "index.md" -exec rm -f {} \;
find . -name "*.o" -exec git rm -f {} \;
find . -name "*.sh" -exec chmod 755 {} \;
ln -s cpp_src.md README.md
git init
git add *
git grep -lz '.html' | xargs -0 perl -i'' -pE "s/.html/.md/g"
git grep -lz '/master/' | xargs -0 perl -i'' -pE "s/\/cpp_src\//\/master\//g"

#git checkout -- mirror.sh
#git commit -a -m "first push"
#git remote add origin https://github.com/cenit/jburkardt.git
#git push -f origin master
