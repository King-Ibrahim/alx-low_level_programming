#include "main.h"

/**
* _strspn - This function gets the length of a prefix substring
* @s: initial segment
* @accept: source bytes
* Return: returns number of nytes in s
*
*/

unsigned int _strspn(char *s, char *accept)
{
	int letter;
	int position = 0;

	while (s[position])
	{
		for (letter = 0; accept[letter]; letter++)
		{
			if (accept[letter] == s[position])
			{
				break;
			}
		}
		if (!accept[letter])
		{
			break;
		}
		position++;
	}
	return (position);
}
