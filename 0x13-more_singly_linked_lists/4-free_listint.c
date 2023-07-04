#include "lists.h"

/**
 * free_listint - This function frees a linked list.
 * @head: The pointer to the head of the linked list to be freed.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
