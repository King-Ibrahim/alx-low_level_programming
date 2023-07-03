#include "lists.h"

/**
 * list_len - This function finds the number of elements in a linked list
 *@h: The  pointer to the list
 *Return: returns the number of elements
 *
*/

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
