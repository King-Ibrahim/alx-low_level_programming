#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes the node
 * of a given index of a list.
 * @head: The pointer to the address of the
 * head of the list.
 * @index: The index of the node to be deleted
 * starting at 0.
 * Return: returns 1 if successful and -1 if failure
 *
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
