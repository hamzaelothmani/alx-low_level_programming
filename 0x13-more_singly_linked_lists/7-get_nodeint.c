#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the Node at a Specified Index in a Linked List
 * @head: Pointer to the First Node in the Linked List
 * @index: Index of the Node to Retrieve
 *
 * Return: Pointer to the Desired Node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s = 0;
	listint_t *temporary = head;

	while (temporary && s < index)
	{
		temporary = temporary->next;
		s++;
	}

	return (temporary ? temporary : NULL);
}
