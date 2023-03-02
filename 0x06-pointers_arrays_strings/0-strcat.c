#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: The destination string of @src
 * @src: the string to be appended
 * Return: pointer to the resulting string @dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int length1 = 0; 
	int length2 = 0; 
	int i;


	while (src[length1] != '\0')
		length1++;

	while (dest[length2] != '\0')
		length2++;

	for (i = 0; i <= length1; i++)
	{
		dest[length2] = src[i];
		length2++;
	}
	return (dest);
}
