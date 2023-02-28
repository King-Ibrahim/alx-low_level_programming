#include<stdio.h>
#include "main.h"

/**
 * print_array - This function prints an array of elements
 * @a: The name of the array
 * @n: The number of elements of the array
 * Return: returns the array and its elements
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	printf("\n");
}
