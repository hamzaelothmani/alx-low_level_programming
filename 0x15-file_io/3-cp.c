#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates a buffer of 1024 bytes in memory.
 * @file: The name of the file for which the buffer is storing characters.
 *
 * Return: A pointer to the newly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (b);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The count of arguments provided to the program.
 * @argv: An array of pointers to the program's arguments.
 *
 * Return - 0 to indicate success.
 *
 * Description: Exit with code 97 if the argument count is incorrect.
 * Exit with code 98 if file_from does not exist or cannot be read.
 * Exit with code 99 if file_to cannot be created or written to.
 * Exit with code 100 if file_to or file_from cannot be closed.
 */
int main(int argc, char *argv[])
{
	int f, t, r, w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, b, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		w = write(t, b, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		r = read(f, b, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(b);
	close_file(f);
	close_file(t);

	return (0);
}
