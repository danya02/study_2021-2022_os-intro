#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 <number>"
    exit 1
fi

rm -f *.tmp

for name in $(seq 1 $1); do
    touch "$name.tmp"
done
