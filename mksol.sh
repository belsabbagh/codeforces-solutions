#!/bin/bash

# Check if the problem ID is provided as an argument
if [ $# -eq 0 ]; then
    echo "Usage: $0 <problem_id>"
    exit 1
fi

# Run the Python script with the provided problem ID
python mksol.py "$1"
