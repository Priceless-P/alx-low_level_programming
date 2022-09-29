#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specific index
 * @h: head of linked list
 * @idx: index of new node
 * @n: new node value
 * Return: inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node_prev = *h, *new;

	if (*h == NULL)
		return (NULL);
	/* add node in the front */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* add node in the index */
	while (node_prev != NULL)
	{
		if (i == idx - 1 && node_prev->next != NULL)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = node_prev->next;
			new->prev = node_prev;
			node_prev->next = new;
			new->next->prev = new;
			return (new);
		}
		node_prev = node_prev->next;
		i++;
	}

	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
