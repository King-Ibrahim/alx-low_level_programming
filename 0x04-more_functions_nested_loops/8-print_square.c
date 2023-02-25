#include "main.h"

/**
 * print_square - This function prints
 * a square followed by a new line
 * Description: prints a square
 * @size: size determines the width and length
 * Return: void
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
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
