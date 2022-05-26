#!/bin/bash

echo "Enter a number:"
./2-cmp
case $? in
    0)
        echo "The number is 0."
        ;;
    1)
        echo "The number is less than 0."
        ;;
    2)
        echo "The number is greater than 0."
        ;;
    *)
        echo "Unknown error."
        ;;
esac
