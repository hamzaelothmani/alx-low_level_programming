#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: The list_t list that needs to be freed
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
