#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *@str: string to be duplicated
 * Return: returns a pointer to the duplicated string or returns NULL
 *
 */
char *_strdup(char *str)
{
	char *newstr = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	newstr = (char *)malloc(n + 1 * sizeof(char));
	if (newstr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			newstr[i] = str[i];
	} else
	{
		return (NULL);
	}
	newstr[i] = '\0';
	return (newstr);
}
