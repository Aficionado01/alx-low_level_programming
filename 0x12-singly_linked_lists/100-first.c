#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - Prints a string before the main function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,%s",
	"\nI bore my house upon my back!\n");
}
