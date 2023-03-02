#include "main.h"

/**
 * _strncpy - This function copies a string to another string
 * @dest: the destination string of the string
 * @src: the string to be copied
 * @n: the number of bytes to include in @dest
 * Return: pointer to the resulting string @dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length1 = 0;
	int length2 = 0;
	int i;

	while (src[length1] != '\0')
		length1++;

	while (dest[length2] != '\0')
		length2++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
