#include "main.h"

/**
 * append_text_to_file - Appends text to the end of an existing file.
 * @filename: A pointer to the file name.
 * @text_content: The string to append to the end of the file.
 *
 * Return: Return -1 if the function fails, the filename is NULL , or the file does not exist.
 *         or the user lacks write permissions.
 *         Otherwise, return 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z, wee, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	z = open(filename, O_WRONLY | O_APPEND);
	wee = write(z, text_content, l);

	if (z == -1 || wee == -1)
		return (-1);

	close(z);

	return (1);
}
