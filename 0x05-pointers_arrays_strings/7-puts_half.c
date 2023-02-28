#include "main.h"

/**
 * puts_half - This function that half of a string
 * Since the length of the string can be odd or even
 * j is equal to (length+1)/2
 * @str: input string
 * Return: half of the input string
 *
 */

void puts_half(char *str)
{
	int i, j;

	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	if (length % 2 == 1)
		j = ((length + 1) / 2);
	else
		j = (length / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
