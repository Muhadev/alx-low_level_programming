#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to retrieve (starting at 0)
 *
 * Return: pointer to the nth node,
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
	listint_t *current = head;
while (current)
{
if (count == index)
return (current);
	count++;
	current = current->next;
}
return (NULL);
}
