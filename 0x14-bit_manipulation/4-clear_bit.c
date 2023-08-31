#include "main.h"

/**
 * clear_bit - Changes the value of a specific bit to 0 within a binary number.
 * @n: Pointer to the number to change
 * @index: Index of the bit to clear
 *
 * Return Value: Returns 1 upon successful execution and -1 in case of failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
