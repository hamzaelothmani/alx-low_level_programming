#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Appends a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: Double pointer to a list of type list_t
 *
 * Return: The address of the new element, or NULL if the operation failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *toBeAdded;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	toBeAdded = malloc(sizeof(list_t));
	if (!toBeAdded)
		return (NULL);

	toBeAdded->str = strdup(str);
	toBeAdded->len = len;
	toBeAdded->next = NULL;

	if (*head == NULL)
	{
		*head = toBeAdded;
		return (toBeAdded);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = toBeAdded;

	return (toBeAdded);
}
