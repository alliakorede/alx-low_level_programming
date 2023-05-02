#include "lists.h"

/**
* pop_listint - deletes the Head Node.
* @head: pointer to the first element
*
* Return: the deleted data inside the element,
* or 0 if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temperature;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temperature = (*head)->next;
	free(*head);
	*head = temperature;

	return (num);
}
