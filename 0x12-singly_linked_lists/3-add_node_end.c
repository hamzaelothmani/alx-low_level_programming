#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Appends a new node at the end of a linked list
 * @head: Double pointer pointing to a list of type list_t
 * @str: String to be placed in the new node
 *
 * Return: The address of the new element, or NULL if the operation failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *recent;
	list_t *temperary = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	recent = malloc(sizeof(list_t));
	if (!recent)
		return (NULL);

	recent->str = strdup(str);
	recent->len = len;
	recent->next = NULL;

	if (*head == NULL)
	{
		*head = recent;
		return (recent);
	}

	while (temperary->next)
		temperary = temperary->next;

	temperary->next = recent;

	return (recent);
}
