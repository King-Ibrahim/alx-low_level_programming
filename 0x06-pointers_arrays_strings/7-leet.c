#include "main.h"

/**
 * leet - This function replaces a string of numbers with letters
 * @z: the string of numbers
 * Return: the string of letters
 *
 */

char *leet(char *z)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (z[i] == arr[j])
				z[i] = replace[j / 2];
		}
	}
	return (z);
}
