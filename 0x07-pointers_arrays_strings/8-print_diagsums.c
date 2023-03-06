#include "main.h"
#include<stdio.h>

/**
* print_diagsums - This function prints the sum of two diagonals of a square matrix
* @a: the array
* @size: the number of array elements
*
*/

void print_diagsums(int *a, int size)
{
	int row = 0;
	int column = 0;
	int i = 0;

	while (i < size)
	{
		row += a[i * (size + 1)];
		column += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, ", n1);
	printf("%d", n2);
	printf("\n");
}
