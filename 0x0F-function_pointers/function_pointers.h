#ifndef FUNC_POINTERS
#define FUNC_POINTERS
/*
* File: function_pointers.h
* Author: Ukonu Divine Chisom
*/

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*FUNC_POINTERS*/
