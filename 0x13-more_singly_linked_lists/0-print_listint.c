#include "lists.h"

/**
 * print_listint - Printing All Elements of a Linked List
 * @h: Linked List Printing for Type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}
