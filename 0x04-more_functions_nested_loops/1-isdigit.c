#include "main.h"

/**
 * _isdigit -  This function tests for a digit
 * @c: This is the input
 * Return: 1 if c is a digit, else 0
 *
 */
 
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
_putchar('\n');
