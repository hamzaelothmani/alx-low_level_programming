#include "lists.h"

/**
 * sum_listint - Calculating the Sum of All Data in a listint_t Linked List
 * @head: First Node in the Linked List
 *
 * Return: Resulting Sum of the Data
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		s += temporary->n;
		temporary = temporary->next;
	}

	return (s);
}
