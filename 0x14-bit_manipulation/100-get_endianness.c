#include "main.h"

/**
 * get_endianness - a  fucntion that checks the endianness
 * Return: 0 of big endian, 1 if little endian
 */
int get_endianness(void)
{
	int rv = 1;

	return (*((char *)&rv) == 1);
}
