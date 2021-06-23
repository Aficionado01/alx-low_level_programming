#!/bin/bash
echo -e "\e[35m\e[3mTesting task $1\e[0m"

if [[ "$1" == "0" ]]; then
	gcc 0-pos_neg.c holberton.h 0-main.c && ./a
elif [[ "$1" == "1" ]]; then
	gcc 1-main.c && ./a
elif [[ "$1" == "2" ]]; then
	gcc 2-largest_number.c holberton.h 2-main.c && ./a
elif [[ "$1" == "3" ]]; then
	gcc 3-print_remaining_days.c 3-convert_day.c holberton.h 3-main_a.c && ./a
	echo -e "\e[35m\e[3m\n----------Next test----------\n\e[0m"
	gcc 3-print_remaining_days.c 3-convert_day.c holberton.h 3-main_b.c && ./a
elif [[ -z "$1" ]] || [[ -n "$1" ]]; then
	echo "Invalid argument(s)"
fi
