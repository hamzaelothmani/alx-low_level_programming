#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Inserts a new node at the start of a linked list
 * @head: Double pointer to a list of type list_t
 * @str: New string to be added to the node
 *
 * Return: The address of the new element, or NULL in case of failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *toBeAdded;
	unsigned int len = 0;

	while (str[len])
		len++;

	toBeAdded = malloc(sizeof(list_t));
	if (!toBeAdded)
		return (NULL);

	toBeAdded->str = strdup(str);
	toBeAdded->len = len;
	toBeAdded->next = (*head);
	(*head) = toBeAdded;

	return (*head);
}
