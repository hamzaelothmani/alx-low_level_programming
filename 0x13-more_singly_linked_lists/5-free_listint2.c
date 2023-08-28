#include "lists.h"

/**
 * free_listint2 - Deallocates Memory for a Linked List
 * @head: Pointer to the listint_t List to Be Freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	*head = NULL;
}
