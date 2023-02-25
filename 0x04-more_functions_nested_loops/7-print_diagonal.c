#include "main.h"

/**
 * print_diagonal -  This function draws a diagonal line
 * @n: This is the length of the line in '\'
 * Return: a diagonal
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i-1; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
};
