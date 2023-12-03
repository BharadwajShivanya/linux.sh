#!/bin/bash

echo "Enter filename : "
read name

if [ -e "$name" ]; then
    cat "$name"
    
else
    echo "does not exist, make it"    
fi    
