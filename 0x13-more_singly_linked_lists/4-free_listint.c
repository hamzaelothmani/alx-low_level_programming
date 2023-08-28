#include "lists.h"

/**
 * free_listint - Freeing a Linked List
 * @head: Freeing a Linked List of Type listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
