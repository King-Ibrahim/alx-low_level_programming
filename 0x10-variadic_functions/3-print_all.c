#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * op_c - This function prints a character
 * @format: char
 * Return: returns 0.
 *
 */

void op_c(va_list format)
{
	printf("%c", va_arg(format, int));
}

/**
 * op_i - This function prints an interger
 * @format: interger
 * Return: returns 0.
 *
 */

void op_i(va_list format)
{
	printf("%i", va_arg(format, int));
}

/**
 * op_f - This function prints a double
 * @format: double
 * Return: returns 0.
 *
 */

void op_f(va_list format)
{
	printf("%f", va_arg(format, double));
}

/**
 * op_s - This function prints a string
 * @format: pointer to a string
 * Return: returns 0.
 *
 */

void op_s(va_list format)
{
	char *str;

	str = va_arg(format, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - This function prints all the variable types.
 * @format: the number of variable parameters
 * Return: returns 0.
 *
 */

void print_all(const char * const format, ...)
{

	va_list all;
	unsigned int i, j;
	char *separator = "";

	f ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		};

	va_start(all, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				ops[j].f(all);
				break;
			}
			j++;
		}
	i++;
	}

	printf("\n");
	va_end(all);
}
