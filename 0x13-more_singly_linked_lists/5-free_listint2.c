#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: double pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
if (!head)
return;
while (*head)
{
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
	*head = NULL;
}
