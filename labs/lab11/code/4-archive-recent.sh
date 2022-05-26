#!/bin/bash

rm -f archived.tar

for file in $(find $1 -type f -mtime -7); do
    echo $file
    if [ -f archived.tar ]; then
        tar rf archived.tar "$file" 2> /dev/null
    else
        tar cf archived.tar "$file" 2> /dev/null 
    fi
done