#!/bin/bash

if [[ -z "$1" || -z "$2" || -z "$3" ]]; then
    echo "Usage: $0 <file> <timeout> <lock-time> [id]"
    exit 1
fi

if [[ ! -f "$1" ]]; then
    echo "$4: File $1 does not exist, creating it"
    touch "$1"
fi

{
    echo "$4 Waiting for lock on $1 for $2 seconds"
    flock --verbose -x -w "$2" 3 || { echo "$4 Lock acquisition failed after $2 seconds" && exit 1; }
    echo "$4 Acquired a lock, holding it for $3..."
    sleep $3
    echo "$4 Releasing lock"
} 3>> "$1"