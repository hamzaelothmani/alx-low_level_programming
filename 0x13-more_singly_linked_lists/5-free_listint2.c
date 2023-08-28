#include "lists.h"

/**
 * free_listint2 - Deallocating Memory of a Linked List
 * @head: Freeing a Linked List of Type listint_t  (passing a pointer to the list)
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
