#!/bin/bash

if [ $# -ne 1 ];then
    echo "Usage is $0 basepath"
    exit 
fi
path=$1

declare -A statarray;

while read line;do
    ftype=`file -b "$line" | cut -d, -f1`
    let statarray["$ftype"]++
    echo $ftype
done < <(find $path -type f )

echo ${!statarray[@]}
echo ${statarray[*]}

echo ======================== File types and counts ======================

for ftype in "${!statarray[@]}";do
    echo $ftype : ${statarray["$ftype"]}
done

