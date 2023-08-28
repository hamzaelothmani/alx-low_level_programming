#include "lists.h"

/**
 * Insert_nodeint_at_index - Inserts a new node in a linked list,
 * At a given position
 * @head: Pointer to the first node in the list
 * @idx: Index where the new node is added
 * @n: Data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        unsigned int s;
        listint_t *newNode;
        listint_t *temporary = *head;

        newNode = malloc(sizeof(listint_t));
        if (!newNode || !head)
                return (NULL);

        newNode->n = n;
        newNode->next = NULL;

        if (idx == 0)
        {
                newNode->next = *head;
                *head = newNode;
                return (newNode);
        }

        for (s = 0; temporary && s < idx; s++)
        {
                if (s == idx - 1)
                {
                        newNode->next = temporary->next;
                        temporary->next = newNode;
                        return (newNode);
                }
                else
                        temporary = temporary->next;
        }

        return (NULL);
}
