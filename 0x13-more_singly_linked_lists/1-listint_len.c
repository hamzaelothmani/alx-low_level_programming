#include "lists.h"

/**
 * listint_len - Returns the Count of Elements in a Linked List
 * @h: Traversing a Linked List of Type listint_t
 *
 * Return: Number of Nodes in a Linked List
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
