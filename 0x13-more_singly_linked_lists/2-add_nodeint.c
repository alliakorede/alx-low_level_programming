#include "lists.h"

/**
* add_nodeint - adds a new node
* @head: pointer to the First Node
* @n: data to insert in that New Node
*
* Return: pointer to the New Node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
