#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Inserts a new node at the start of a linked list
 * @head: double pointer to the list_t list
 * @str: Double pointer pointing to a list of type list_t
 *
 * Return: The address of the new element, or NULL in case of failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *recent;
	unsigned int len = 0;

	while (str[len])
		len++;

	recent = malloc(sizeof(list_t));
	if (!recent)
		return (NULL);

	recent->str = strdup(str);
	recent->len = len;
	recent->next = (*head);
	(*head) = recent;

	return (*head);
}
