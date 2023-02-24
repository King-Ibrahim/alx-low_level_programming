#include "main.h"

/**
 * print_numbers - This function prints a single digit number
 * Return: A single digit followed by a new line
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
