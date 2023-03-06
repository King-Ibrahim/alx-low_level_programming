#include "main.h"

/**
* _strpbrk - This function matches the first occurence of bytes
* in s with the bytes in accept
* @s: The occurence
* @accept: character to search
* Return: returns a pointer to the byte in s
*
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; *(s + i) ; i++)
	{
		for (j = 0 ; *(accept + j) ; j++)
		{
			if (*(accept + j) == s[i])
			{
				return (s + i);
			}
		}
		if (*(accept + j) == s[i])
		{
			return (s + i);
		}
	}
	return (0);
}
