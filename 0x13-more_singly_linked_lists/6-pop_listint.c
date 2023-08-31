#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the linked list
 *
 * Return: the data (n) of the deleted head node,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
int data;
	listint_t *temp;
if (!head || !*head)
return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
return (data);
}
