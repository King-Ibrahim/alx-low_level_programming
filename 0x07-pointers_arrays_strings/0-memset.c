#include "main.h"

/**
* _memset - This functions fills a memory area
* @s: points to memory to be filled
* @b: constant hexadecimal number
* @n: The number of bytes to of area to be filled
* Return: returns a pointer to the memory area s
*
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while( i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
