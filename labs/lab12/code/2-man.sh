#!/bin/bash

if [[ -z "$1" ]]; then 
    echo "Usage: $0 <man-page>"
    exit 1
fi

if [[ ! -f "/usr/share/man/man1/$1.1.gz" ]]; then
    echo "No manual page for $1 found in section 1"
    exit 1
fi

zcat "/usr/share/man/man1/$1.1.gz" | groff -T utf8 -man | less -R