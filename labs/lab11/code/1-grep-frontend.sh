#!/bin/bash

while getopts "i:o:p:Cn" opt; do
    case $opt in
        i)
        input_file=$OPTARG
        ;;
        o)
        output_file=$OPTARG
        ;;
        p)
        pattern=$OPTARG
        ;;
        C)
        case_insensitive=1
        ;;
        n)
        print_line_numbers=1
        ;;
        \?)
        echo "Invalid option: -$OPTARG" >&2
        exit 1
        ;;
        :)
        echo "Option -$OPTARG requires an argument." >&2
        exit 1
        ;;
    esac
done

if [ -z "$input_file" ] || [ -z "$output_file" ] || [ -z "$pattern" ]; then
    echo "Usage: $0 -i <input_file> -o <output_file> -p <pattern> [-C] [-n]"
    exit 1
fi

grep $(if [ -n "$case_insensitive" ]; then echo "-i"; fi) $(if [ -n "$print_line_numbers" ]; then printf %s "-n"; fi) "$pattern" "$input_file" > "$output_file"
