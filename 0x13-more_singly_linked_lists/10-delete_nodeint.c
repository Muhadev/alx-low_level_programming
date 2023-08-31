#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
unsigned int count = 0;
if (!head || !*head)
return (-1);
if (index == 0)
{
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
return (1);
}
while (current)
{
if (count == index)
{
	prev->next = current->next;
	free(current);
return (1);
}
	prev = current;
	current = current->next;
	count++;
}
return (-1);
}
