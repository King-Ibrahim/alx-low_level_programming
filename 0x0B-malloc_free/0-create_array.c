#include "main.h"
#include <stdio.h>
#include <stdlib.h>

 /**
 * @*create_array - This function creates an array of size c
 * @size: the unsigned int size
 * @c: the char array
 * Return: returns a pointer to the array created
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc((size) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
