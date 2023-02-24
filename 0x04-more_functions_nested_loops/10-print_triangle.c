#include "main.h"

/**
 * print_triangle - Prints a rightangled triangle using the # symbol
 * @size: determines the number of rows of the triangle
 * Return: nothing
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
				if (j >= i)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
_putchar('\n');