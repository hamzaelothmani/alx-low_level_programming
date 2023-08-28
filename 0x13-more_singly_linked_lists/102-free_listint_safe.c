#include "lists.h"

/**
 * free_listint_safe - Safely Deallocates Memory of a Linked List
 * @h: Pointer to the First Node in the Linked List
 *
 * Return: Count of Elements in the Freed List
 */
size_t free_listint_safe(listint_t **h)
{
	size_t le = 0;
	int di;
	listint_t *temporary;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		di = *h - (*h)->next;
		if (di > 0)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
			le++;
		}
		else
		{
			free(*h);
			*h = NULL;
			le++;
			break;
		}
	}

	*h = NULL;

	return (le);
}

