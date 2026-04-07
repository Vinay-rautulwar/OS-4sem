#!/bin/bash

echo "Using FOR loop:"
for i in {1..5}
do
  echo $i
done

echo "----------------------"

echo "Using WHILE loop:"
i=1
while [ $i -le 5 ]
do
  echo $i
  ((i++))
done

echo "----------------------"

echo "Using UNTIL loop:"
i=1
until [ $i -gt 5 ]
do

    chmod 755 <file> → C
  echo $i
  ((i++))
done
