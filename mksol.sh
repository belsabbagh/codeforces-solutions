#!/bin/bash

# Check if the problem ID is provided as an argument
if [ $# -eq 0 ]; then
    echo "Usage: $0 <problem_id>"
    exit 1
fi

# Function to fetch the HTML content of the problem page
get_html_content() {
    local problem_id=$1
    local url="https://codeforces.com/problemset/problem/${problem_id:0:${#problem_id}-1}/${problem_id: -1}"
    local html_content=$(curl -s "$url")
    echo "$html_content"
}

# Run the Python script to get the problem title
problem_id=$1
html_content=$(get_html_content "$problem_id")

# Use mksol.py to extract the problem title
problem_title=$(python mksol.py "$html_content")

if [ -z "$problem_title" ]; then
    echo "Problem title not found"
    exit 1
fi

# Generate file path
problem_filename="${problem_id}-${problem_title:3}"
filepath="${problem_filename//:/}.cpp"

if [ -f "$filepath" ]; then
    echo "A solution already exists for this problem"
    exit 0
fi

# Create the solution file
cat > "$filepath" <<EOF
#include<iostream>
using namespace std;
int main(){
    return 0;
}
EOF

echo "Solution file created: $filepath"
