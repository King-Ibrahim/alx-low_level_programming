#include "main.h"

/**
 * _strlen - This function returns the length of a string
 * @s: input string
 * Return: interger length of the input string
 *
 */

int _strlen(char *s)
{
	int i = 1;
	int length = 0;

	char letter = s[0];

	while (letter != '\0')
	{
		length++;
		letter = s[i++];
	}
	return (length);
}
