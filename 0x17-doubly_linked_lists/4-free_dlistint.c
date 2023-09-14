#include "lists.h"

/**
 * free_dlistint - Frees the memory allocated for a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
