#include "lists.h"

/**
 * pop_listint - Removing the Head Node of a Linked List
 * @head: Pointer to the Beginning of the Linked List
 *
 * Return: The Data Inside the Deleted Element,
 * or 0 if the List is Empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int s;

	if (!head || !*head)
		return (0);

	s = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (s);
}
