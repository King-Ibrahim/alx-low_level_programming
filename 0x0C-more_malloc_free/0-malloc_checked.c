nclude "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - This function allocates memory
  * @b: the size to be allocate
  * Return: returns nothing.
  *
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
