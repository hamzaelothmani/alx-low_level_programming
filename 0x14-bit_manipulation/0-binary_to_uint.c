#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A string that holds the binary representation of the number.
 *
 * Return: The resultant number after converting the binary representation.
 */
unsigned int binary_to_uint(const char *b)
{
	int s;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (s = 0; b[s]; s++)
	{
		if (b[s] < '0' || b[s] > '1')
			return (0);
		val = 2 * val + (b[s] - '0');
	}

	return (val);
}
