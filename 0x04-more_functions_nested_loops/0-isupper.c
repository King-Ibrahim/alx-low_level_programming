#include "main.h"

/**
 * _isupper - This function tests for an uppercase character
 * @c: This is the character input
 * Return: 1 if c is uppercase, else 0
 *
 */
 
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

