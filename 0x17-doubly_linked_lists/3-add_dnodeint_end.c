#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly added node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *current;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	newnode->prev = current;
	current->next = newnode;
	return (newnode);
}
