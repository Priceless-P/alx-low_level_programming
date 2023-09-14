#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index.
* @head: Pointer to a pointer to the head of the list.
* @index: Index of the node to delete (starting from 0).
*
* Return: 1 if the deletion succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	current = *head;
	while (current != NULL)
	{
		if (i == index - 1)
		{
			if (current->next == NULL)
			{
				return (-1);
			}
			temp = current->next;
			current->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = current;
			}
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
