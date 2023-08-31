#include "main.h"

/**
 * flip_bits - Calculates the count of bits that need to be changed
 * in order to transform from one number to another.
 * @n: First Number
 * @m: Second Number
 *
 * Return Value: The count of bits that need to be changed to transition from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, num = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		curr = exclusive >> s;
		if (curr & 1)
			num++;
	}

	return (num);
}
