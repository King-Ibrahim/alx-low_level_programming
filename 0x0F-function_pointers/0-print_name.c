#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This function points to function that prints a name
 * @name: the name
 * @f: pointer to a function
 * Return: returns a name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
