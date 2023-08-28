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
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
