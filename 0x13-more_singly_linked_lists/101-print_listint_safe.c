#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Calculates the Count of Unique Nodes in the Loop of Linked List
 * in a looped listint_t linked list.
 * @head: A Pointer to the Head of the listint_t Linked List to Examine.
 *
 * Return: If the Linked List is Not Looping - 0.
 * Otherwise - The Count of Unique Nodes in the List.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tor, *har;
	size_t ns = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tor == har)
		{
			tor = head;
			while (tor != har)
			{
				ns++;
				tor = tor->next;
				har = har->next;
			}

			tor = tor->next;
			while (tor != har)
			{
				ns++;
				tor = tor->next;
			}

			return (ns);
		}

		tor = tor->next;
		har = (har->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Safely Prints a listint_t Linked List
 * @head: A Pointer to the Head of the listint_t Linked List.
 *
 * Return: The Count of Nodes in the List.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ns, i = 0;

	ns = looped_listint_len(head);

	if (ns == 0)
	{
		for (; head != NULL; ns++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < ns; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (ns);
}
