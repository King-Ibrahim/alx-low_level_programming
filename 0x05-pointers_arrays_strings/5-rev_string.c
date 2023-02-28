#include "main.h"

/**
 * rev_string - This function reverses a string
 * @s: string input
 * Return: reverse of string
 *
 */

void rev_string(char *s)
{
	int cf = 0;
	int i;
	char str = s[0];

	while (s[cf] != '\0')
		cf++;

	for (i = 0; i < cf; i++)
	{
		cf--;
		str = s[i];
		s[i] = s[cf];
		s[cf] = str;
	}
}
