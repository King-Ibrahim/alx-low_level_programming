#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a list
 *@head: the pointer to the head of the list
 *@str: the string to be added to the list
 *Return: returns the address of an element
 *if failed returns NULL
 *
**/

list_t *add_node_end(list_t **head, const char *str)
{
	char *ptr;
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	ptr = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = ptr;
	new->length = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
