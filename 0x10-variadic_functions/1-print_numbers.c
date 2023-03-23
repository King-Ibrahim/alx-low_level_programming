#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - This function prints numbers followed by a new line
 * @separator: the string to be printed between the numbers
 * @n: the number of intergers to be printed
 * Return: returns 0.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
	va_list numbers;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
