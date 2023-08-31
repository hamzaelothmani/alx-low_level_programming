#include "main.h"

/**
 * print_binary - Displays the binary representation of a decimal number.
 * @n: The decimal number that you want to print in its binary equivalent.
 */
void print_binary(unsigned long int n)
{
	int s, num = 0;
	unsigned long int curr;

	for (s = 63; s >= 0; s--)
	{
		curr = n >> s;

		if (curr & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
