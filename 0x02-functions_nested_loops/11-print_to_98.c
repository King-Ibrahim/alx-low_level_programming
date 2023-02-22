#include<stdio.h>
#include "main.h"

/**
 * print_to_98 - This function primts all natural numbers from n to 98
 * It's bi directional from the user's input
 * @n: number input
 * Return: Always 0 (Success)
 *
 */

void print_to_98(int n)
{

	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}

	else
	{
		printf("98");
	}
	printf("\n");
}
