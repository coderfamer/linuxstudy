#!/bin/bash


no1=4
no2=5
let result=no1+no2
echo $result
let no1++
echo $no1
let no1+=4
echo $no1

# []
result=$[ no1 + no2 ]
echo "result='$'[ no1 + no2] = $result"
result=$[ $no1 + 4 ]
echo "result=$[ $no1 + 4] = $result"

echo '(())'
result=$(( no1 + no2 ))
echo $result

echo 'expr'
result=`expr 4 + 3`
echo $result

result=$(expr $no1 + $no2)
echo $result
