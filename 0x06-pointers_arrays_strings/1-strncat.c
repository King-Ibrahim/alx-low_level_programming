#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * @dest: The destination string of @src
 * @src: string to be appended
 * @n: the number of bytes from @src
 * Return: a pointer to the resulting string @dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int length1 = 0;
	int length2 = 0;
	int i;

	while (src[length1] != '\0')
		length1++;

	while (dest[length2] != '\0')
		length2++;

	for (i = 0; i < n; i++)
	{
		dest[length2] = src[i];
		length2++;
	}
	return (dest);
}

