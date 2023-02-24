#include "main.h"

/**
 * print_square - This function prints a square followed by a new line
 * @size: size determines the width and length
 * Return: returns a square consisting of '#'
 *
 */
 
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
_putchar('\n');
