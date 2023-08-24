#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns all the numbers of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number all the elements in h
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
