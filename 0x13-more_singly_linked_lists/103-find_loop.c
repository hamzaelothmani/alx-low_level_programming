#include "lists.h"

/**
 * find_listint_loop - Detects the Loop in a Linked List
 * @head: Linked List to Search Within
 *
 * Return: Address of the Node Where the Loop Begins, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *fa = head;

	if (!head)
		return (NULL);

	while (sl && fa && fa->next)
	{
		fa = fa->next->next;
		sl = sl->next;
		if (fa == sl)
		{
			sl = head;
			while (sl != fa)
			{
				sl = sl->next;
				fa = fa->next;
			}
			return (fa);
		}
	}

	return (NULL);
}
