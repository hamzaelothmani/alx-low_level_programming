#include "main.h"

/**
 * get_endianness - determines whether a machine follows little endian or big endian byte order.
 * Return: 0  for the bigger, 1 for the smaller
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *ce = (char *) &s;

	return (*ce);
}
