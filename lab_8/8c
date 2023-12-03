#!/bin/bash
echo "Enter the filename: "
read filename
echo "Enter the pattern to search: "
read pattern
if [ -f "$filename" ]
then
grep "$pattern" "$filename"
else
echo "$filename does not exist."
fi
