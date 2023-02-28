#include "main.h"

/**
 * puts2 - This function prints one character out of two
 * @str: input
 * Return: print
 *
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) != 0)
			continue;
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}
