#include "main.h"

/**
 * create_file - Build a file.
 * @filename: A pointer indicating the filename to be created.
 * @text_content: A pointer to a string for writing to the file.
 *
 * Return -1 in case of function failure.
 *         otherwise, return 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, wee, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wee = write(f, text_content, l);

	if (f == -1 || wee == -1)
		return (-1);

	close(f);

	return (1);
}
