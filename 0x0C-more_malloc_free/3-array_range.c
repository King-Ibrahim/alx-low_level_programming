#include "main.h"
#include <stdlib.h>

/**
  * array_range - This function writes an array of intergers
  * @min: The minimum
  * @max:  The maximum
  * Return: integer value
  *
  */

int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
