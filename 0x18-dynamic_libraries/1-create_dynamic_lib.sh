#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fpic -c *.c
gcc -shared -o liball.so *.o
chmod 644 liball.so
export LD_LIBRARY_PATH=".:$LD_LIBRARY_PATH"
