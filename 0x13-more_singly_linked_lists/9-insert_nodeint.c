
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: Pointer to the First Node in the Linked List
 * @idx: Index Where the New Node is Added
 * @n: Data to Insert in the New Node
 *
 * Return: Pointer to the New Node, or NULL if the Operation Fails
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
