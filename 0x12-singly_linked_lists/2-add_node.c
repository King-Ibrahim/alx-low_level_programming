#include "lists.h"

/**
 * add_node - This function adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *Return: returns the address to the a element
 *if failed returns NULL
 *
**/

list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;

	new->str = ptr;
	new->length = length;
	new->next = *head;

	*head = new;

	return (new);

}
