#include "lists.h"

/**
 * pop_listint - This function Deletes the head node
 *  of a linked list.
 * @head: The pointer to the address of the
 * head of the list.
 * Return: returns head node data
 * if list empty returns 0
 *
 */

int pop_listint(listint_t **head)
{
	int state;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	state = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (state);
}
