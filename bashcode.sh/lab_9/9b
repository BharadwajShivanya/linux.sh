#!/bin/bash
echo "Enter the directory path: "
read directory
echo "Enter the file extension to search (e.g., txt): "
read extension
echo "Enter the minimum file size in bytes: "
read min_size
echo "Enter the maximum file size in bytes: "
read max_size
find "$directory" -type f -name "*.$extension" -size +"$min_size"c -size -"$max_size"c
