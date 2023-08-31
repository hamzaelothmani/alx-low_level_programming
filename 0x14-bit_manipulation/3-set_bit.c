#include "main.h"

/**
 * set_bit - 
Sets a bit to the value 1 at a specified index within a binary number.
 * @n: A pointer that refers to the binary number you want to modify.
 * @index: The position of the bit that you want to set to 1 within the binary number.
 *
 * Return: 1 to indicate success and -1 to indicate failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
