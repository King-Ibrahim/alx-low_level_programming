#include "lists.h"

/**
 * sum_listint - This function calculates the sum of
 * all the data of a linked list.
 * @head: the pointer to the head of the list.
 * Return: returns the sum of all data
 * 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
