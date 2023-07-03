#include "lists.h"

/**
 *free_list - A function that  Frees a list
 *@head: The pointer to the list head
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
