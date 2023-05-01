#include "lists.h"

/**
* add_nodeint_end - adds a node at the end.
* @head: pointer to the 1st element in the List
* @n: data to insert in the New element
*
* Return: pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newelement;
	listint_t *temp = *head;

	newelement = malloc(sizeof(listint_t));
	if (!newelement)
	return (NULL);

	newelement->n = n;
	newelement->next = NULL;

	if (*head == NULL)
{
	*head = newelement;
	return (newelement);
}

	while (temp->next)
	temp = temp->next;

	temp->next = newelement;

	return (newelement);
}
