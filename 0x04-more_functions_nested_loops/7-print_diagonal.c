#include "main.h"

/**
 * print_diagonal -  This function draws a diagonal line
 * @n: This is the length of the line in '\'
 * Return: a diagonal
 *
 */

void print_diagonal(int n)
{
	int i, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (m = 1; m < i-1; m++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
};
