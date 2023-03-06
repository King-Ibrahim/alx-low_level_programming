#include "main.h"

/**
* _memcpy - This function copies a memory area from a source to destination.
* @dest: destination
* @src: source
* @n: number of bytes to be copied
* Return: a pointer to dest
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *source = src;
	char *destination = dest;

	while (n != 0)
	{
		*destination++ = *source++;
		n--;
	}

	return (dest);
}

