#include "lists.h"

/**
 * delete_nodeint_at_index - Removes a Node from a Linked List at a Specified Index
 * @head: Pointer to the First Element in the Linked List
 * @index: Index of the Node to Be Removed
 *
 * Return:  1 for Success or -1 for Failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *curr = NULL;
	unsigned int s = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (s < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		s++;
	}


	curr = temporary->next;
	temporary->next = curr->next;
	free(curr);

	return (1);
}
