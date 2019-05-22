#!/bin/bash

#!/bin/bash -xv


arr0=(1 2 3 4 5 6)

echo "arr0 = ${arr0[0]}"
index=5
echo "[arr5] = ${arr0[$index]}"

echo "arr0 list:"
echo "${arr0[*]}"

echo "${arr0[@]}"


echo "arr0 length = ${#arr0[*]}"
echo "arr0 length = ${#arr0[@]}"
#Arr
