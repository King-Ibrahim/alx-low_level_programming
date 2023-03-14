#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - This function concatenates arguments
 * @ac: the array
 * @av: the pointer to array
 * Return: returns a pointer to string
 *
 */

char *argstostr(int ac, char **av)
{
	int size = 0;
	int counter, counter1, counter2 = 0;
	char *ptr;

	for (counter = 0; counter < ac; counter++)
	{
		for (counter1 = 0; av[counter][counter1] != '\0'; counter1++)
		{
			size += 1;
		}
		size += 1;
	}
	size += 1;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (counter = 0; counter < ac; counter++)
	{
		for (counter1 = 0; av[counter][counter1] != '\0'; counter1++)
		{
			ptr[counter2] = av[counter][counter1];
			counter2++;
		}
		ptr[counter2] = '\n';
		counter2++;
	}
	ptr[counter2] = '\0';
	return (ptr);
	
		if (ac == 0 || av == NULL)
            return (NULL);
	
}
