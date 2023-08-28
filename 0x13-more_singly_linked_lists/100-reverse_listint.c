#include "lists.h"

/**
 * reverse_listint - Inverts the Order of a Linked List
 * @head: Pointer to the First Node in the Linked List
 *
 * Return: Pointer to the First Node in the Reversed Linked List
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *following = NULL;

	while (*head)
	{
		following = (*head)->following;
		(*head)->following = previous;
		previous = *head;
		*head = following;
	}

	*head = previous;

	return (*head);
}
