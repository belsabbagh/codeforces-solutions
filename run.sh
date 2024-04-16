#!/bin/bash

declare -A ids

for i in *.cpp; do
    ids[${i%-*}]=$i
done

problem_id=$1

g++ "${ids[$problem_id]}" -o build/$problem_id.out

while true; do  
  echo -e "Executing $problem_id"
  ./build/$problem_id.out
  echo -e "\nExecuted $problem_id"
done
