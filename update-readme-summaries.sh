#! /bin/bash
# This script update-readme-summaries.sh is updating the README file 
sed -n -e '1,/#SUMMARIES:/p' README > README.tmp$$
head -99 ex*/SUMMARY >> README.tmp$$
echo '===========' >> README.tmp$$
mv README README~
mv README.tmp$$ README
