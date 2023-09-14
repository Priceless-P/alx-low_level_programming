#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given index.
* @h: Pointer to a pointer to the head of the list.
* @idx: Index at which the new node should be added (starting from 0).
* @n: Integer to be stored in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *current;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newnode;
		}
		*h = newnode;
		return (newnode);
	}
	current = *h;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			newnode->prev = current;
			newnode->next = current->next;

			if (current->next != NULL)
			{
				current->next->prev = newnode;
			}
			current->next = newnode;
			return (newnode);
		}
		current = current->next;
		i++;
	}
	free(newnode);
	return (NULL);
}
