#!/bin/bash

# Define an associative array to store problem ids and corresponding cpp file names
declare -A ids

# Populate the associative array
for i in *.cpp; do
    ids[${i%-*}]=$i
done

# Parse command line arguments
problem_id=$1

# Compile the cpp solution file for the given problem id
g++ "${ids[$problem_id]}" -o build/$problem_id.out

# Run the compiled binary in a repl

while true; do  
  echo -e "Executing $problem_id"
  ./build/$problem_id.out
  echo -e "\nExecuted $problem_id"
done
