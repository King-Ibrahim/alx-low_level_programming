#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This function prints the elements of an array
 * @array: the array
 * @size: size of the array
 * @action: the pointer to the printing function
 * Return: void
 *
 */
 
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
