#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and print its contents to the standard output STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return the actual number of bytes read and printed as 'w' when the function succeeds
 *        Return '0' when the function fails or when the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(f, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(f);
	return (w);
}
