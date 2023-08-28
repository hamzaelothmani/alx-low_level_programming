#include "lists.h"

/**
 * add_nodeint_end - Adding a Node at the End of a Linked List
 * @head: Pointer to the First Element in the Linked List
 * @n: Adding a Node at the End of a Linked List
 *
 * Return: Returns a Pointer to the New Node, or NULL if the Operation Fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temporary = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temporary->next)
		temporary = temporary->next;

	temporary->next = newNode;

	return (newNode);
}
