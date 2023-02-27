#include "main.h"

/**
 * swap_int - Thia function swaps the values of two integers
 * @a: first interger
 * @b: second interger
 * Return: integers
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
