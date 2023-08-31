#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_node;
while (current)
{
	next_node = current->next;
	current->next = prev;
	prev = current;
	current = next_node;
}
	*head = prev;
return (*head);
}
