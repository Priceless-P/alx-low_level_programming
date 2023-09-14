#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the elements in a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the elements in the doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
