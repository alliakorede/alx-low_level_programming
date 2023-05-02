#include "lists.h"

/**
* delete_nodeint_at_index - node would be deleted at certain index
* @head: pointer to the first element
* @index: deleted node index
*
* Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temperature = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
{
	*head = (*head)->next;
	free(temperature);
	return (1);
}

	while (i < index - 1)
{
	if (!temperature || !(temperature->next))
	return (-1);
	temperature = temperature->next;
	i++;
}


	current = temperature->next;
	temperature->next = current->next;
	free(current);

	return (1);
}
