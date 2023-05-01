#include "lists.h"

/**
* free_listint - frees a list
* @head: listint_t list to be Freed
*/
void free_listint(listint_t *head)
{
	listint_t *temperature;

	while (head)
{
	temperature = head->next;
	free(head);
	head = temperature;
}
}
