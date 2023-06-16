#include "main.h"
#include <stdlib.h>

/**
  * _calloc - This function allocates memory for an array
  * @nmemb: the number of members
  * @size: array size
  * Return: returns a pointer
  *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	ptr = malloc(l);

	if (ptr == NULL)
		return (NULL);

	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
