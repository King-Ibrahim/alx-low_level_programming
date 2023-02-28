#include "main.h"

/**
 * char *_strcpy - This function copies the string pointed to by src
 * @dest: The copy destination
 * @src: The copy source
 * Return: copy of scr string
 *
 */
 
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
