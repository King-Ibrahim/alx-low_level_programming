#include "main.h"

/**
 * print_triangle - Prints a rightangled triangle using the # symbol
 * @size: determines the number of rows of the triangle
 * Return: nothing
 *
 */

void print_triangle(int size)
{
	int i, j,k;

	if (size > '0')
		_putchar('\n')

	for (i <= size; i > '1'; i--)
	{
		for (k = size-i; k >= '1'; k--)
			_putchar(' ');
		for(j = '1'; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
