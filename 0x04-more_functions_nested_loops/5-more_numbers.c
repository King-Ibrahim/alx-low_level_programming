#include "main.h"

/**
 * more_numbers - This function prints 10 times the numbers 0-14
 * Return: returns the numbers 0-14 and multiplied by 10 followed by a new line
 *
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
