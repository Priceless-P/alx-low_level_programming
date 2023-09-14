#include "lists.h"

/**
 * dlistint_len - Computes the length of a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
