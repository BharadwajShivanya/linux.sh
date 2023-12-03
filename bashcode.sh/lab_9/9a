#!/bin/bash
echo "Enter the directory path: "
read directory
echo "Enter the prefix to add: "
read prefix
echo "Enter the suffix to add: "
read suffixfor file in "$directory"/*
do
if [ -f "$file" ]
then
filename=$(basename "$file")
extension="${filename##*.}"
filename="${filename%.*}"
mv "$file" "$directory/$prefix$filename$suffix.$extension"
fi
done
