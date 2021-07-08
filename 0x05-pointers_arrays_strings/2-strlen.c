#include "holberton.h"

/**
* _strlen - return the length of a string
* @s: pointer to the string
*
* Return: length of string
*/

int _strlen(char *s)
{
int i = 0;
for (i = 0; s[i] != '\0'; ++i)
;

return (i);
}
