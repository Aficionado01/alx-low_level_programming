#include "holberton.h"
/**
* _strchr - locates a character in a string
* @s: string to check
* @c: character to check for
*
* Return: pointer to spot in s with c or null
*/

char *_strchr(char *s, char c)
{
int i = 0;

while (*(s + i))
{
if (*(s + i) == c)
return (s + i);
i++;
}
if (*(s + i) == c)
return (s + i);
return (0);
}
