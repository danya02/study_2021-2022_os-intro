#!/bin/bash

while true; do
    charind=$((RANDOM % 26 + 97))
    charcode=`printf '%x' $charind`
    char=`printf "\x$charcode"`
    echo -n $char
    sleep 0.1
done