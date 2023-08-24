#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints every element of a linked list
 * @h: pointer to the list_t  list to print
 *
 * Return: the number of the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (n)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}

