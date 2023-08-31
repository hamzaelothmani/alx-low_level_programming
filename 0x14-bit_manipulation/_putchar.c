#include "main.h"
#include <unistd.h>
/**
 * _putchar - Prints the character c to the standard output (stdout)
 * @c: The character that needs to be printed.
 *
 * Return: Returns 1 upon successful execution.
 * If an error occurs, the function returns -1, and the errno variable is adjusted accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
