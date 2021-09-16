#!/bin/fish
echo -e "\e[34mCompiling...\e[0m"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5.out
# [ $status -eq 0 ] && ./keygen5.out $argv[1]
[ $status -eq 0 ] && echo -e "\e[34mCracking program...\e[0m" && ./crackme5 $argv[1] (./keygen5.out $argv[1])
