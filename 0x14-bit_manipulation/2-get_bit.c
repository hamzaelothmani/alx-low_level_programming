#include "main.h"

/**
 * get_bit - Returns the value of the bit at a specific index in a decimal number
 * @n: The decimal number in which you want to search for the bit value at a specific index.
 * @index: The position of the bit within the decimal number whose value you want to retrieve.
 *
 * Return: The value of the bit at the specified index within the decimal number.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
