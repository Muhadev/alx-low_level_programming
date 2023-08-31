#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer to the head of the linked list
 * @n: integer value to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;
if (!head)
return (NULL);
	new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
	new_node->n = n;
	new_node->next = NULL;
if (*head == NULL)
{
	*head = new_node;
return (new_node);
}
	temp = *head;
while (temp->next)
	temp = temp->next;
temp->next = new_node;
return (new_node);
}
