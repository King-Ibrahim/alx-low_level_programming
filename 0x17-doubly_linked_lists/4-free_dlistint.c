#include "lists.h"
/**
 * free_dlistint - This functions frees memory
 * in the dlistint_t list.
 * @head: the pointer to head of the list
 * Return: returns nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
