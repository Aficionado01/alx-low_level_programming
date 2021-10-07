#!/usr/bin/fish
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *-*.c test_$argv[1].c
[ $status -eq 0 ] && ./a.out
