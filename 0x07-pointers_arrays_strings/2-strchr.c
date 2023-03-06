#include "main.h"

/**
*_strchr - This function prints the match of the first occurence of a letter
*@s: string array
*@c: the letter of occurence
*Return: the letter of occurence
*
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
}
