#include "main.h"

/**
 * print_line - This function draws a straight line
 * @n: the input number that determines the length of the line in '_'
 * Return: returns a straight line
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
