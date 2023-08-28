#include "lists.h"

/**
 * add_nodeint - Adding a Node at the Beginning of a Linked List
 * @head: Pointer to the First Node in the Linked List
 * @n: Adding a New Node at the Beginning of a Linked List
 *
 * Return: Returns a Pointer to the New Node, or NULL if the Operation Fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
