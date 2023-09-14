#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a doubly linked list.
*
* @head: A pointer to the head of the doubly linked list.
* @n: The value to be stored in the new node.
*
* Return: A pointer to the newly added node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
