#include "holberton.h"

/**
* binary_to_uint - converts a binary nbr to an unsigned int.
* @b: pointer to a string containing a binary nbr
*
* Return: unsigned int of binary nbr, or 0
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int ui = 0;

if (!b)
return (0);
i = 0;
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}
for (i = 0; b[i] != '\0'; i++)
{
ui <<= 1;
if (b[i] == '1')
ui += 1;

}
return (ui);
}
