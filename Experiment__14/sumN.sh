#!/bin/bash
echo "Enter value of N:"
read n
sum2=0
i=1
while [ $i -le $n ]
do
    sum2=$((sum2 + i))
    i=$((i + 1))
done
echo "Sum using WHILE loop: $sum2"
