#!/bin/bash
start=$(date +%s)
for i in 100;do
    echo $i
done

end=$(date +%s)
difference=$(( end - start ))

echo $end
echo $start

echo $difference
