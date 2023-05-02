#include "lists.h"

/**
* sum_listint - cal the Sum of data in a listint_t list
* @head: first node in the linked list
*
* Return: resulting Sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temperature = head;

	while (temperature)
{
	sum += temperature->n;
	temperature = temperature->next;
}

	return (sum);
}
