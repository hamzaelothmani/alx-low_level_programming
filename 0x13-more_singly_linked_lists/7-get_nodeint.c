#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list
 * @head: First node in the linked list
 * @index: Index of the node to return
 *
 * Return: Pointer to the node we're looking for, or NULL
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
