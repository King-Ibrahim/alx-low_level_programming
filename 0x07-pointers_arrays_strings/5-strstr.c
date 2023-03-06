#include "main.h"

/**
* _strstr - This function locates a substring.
* @haystack: The char string array
* @needle: The occurence in question
* Return: returns the first occurance
* of substring or null
*
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *duplicate = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			needle++;
			haystack++;
		}
		if (!*needle != '\0')
		{
			return (duplicate);
		}
		haystack++;
	}
	return (0);
}
