#include "holberton.h"
/**
* _isupper - check if c in upper.
* @c : char to check
* Return: Always 0.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
