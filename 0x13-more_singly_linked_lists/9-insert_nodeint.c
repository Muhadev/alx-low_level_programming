#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the linked list
 * @idx: index where the new node should be added
 * @n: integer value for the new node's data (n)
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
	listint_t *new_node, *temp;
if (!head)
return (NULL);
if (idx == 0)
return (add_nodeint_end(head, n));

	temp = *head;
while (temp)
{
if (count == idx - 1)
{
	new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
return (new_node);
}
	count++;
	temp = temp->next;
}
return (NULL);
}
