#include "main.h"

/**
 * get_endianness - Checks the endianness of this system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	return (5 << 8 == 0 ? 0 : 1);
}
