#include <stdio.h>
#include "lists.h"

/**
 * print_list - Displays all the elements of a linked list
 * @h: Pointer to the list of type list_t to be printed
 *
 * Return: The count of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
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
