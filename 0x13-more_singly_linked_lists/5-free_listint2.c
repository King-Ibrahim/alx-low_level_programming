#include "lists.h"

/**
 * free_listint2 - This function frees a  list.
 * @head: The pointer to the address of the
 * head of the list.
 * Return: returns the head set to NULL.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
