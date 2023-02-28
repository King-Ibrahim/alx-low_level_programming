#include "main.h"

/**
 * print_rev - This function prints the reverse form of a string
 * cf is to first count to end, cb is to count back
 * @s: str input
 * Return: string in reverse
 *
 */
 
void print_rev(char *s)
{
	int cf = 0;
	int i, cb;

	for (i = 0; s[i] != '\0'; i++)
	{
		cf++;
	}

	for (cb = (cf - 1); cb >= 0; cb--)
	{
		_putchar(s[cb]);
	}
	_putchar('\n');
}
