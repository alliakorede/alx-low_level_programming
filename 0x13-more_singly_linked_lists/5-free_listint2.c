#include "lists.h"

/**
* free_listint2 - Frees a linked list
* @head: Pointer to the listint_t
*/
void free_listint2(listint_t **head)
{
	listint_t *temperature;

	if (head == NULL)
	return;

	while (*head)
{
	temperature = (*head)->next;
	free(*head);
	*head = temperature;
}

	*head = NULL;
}
