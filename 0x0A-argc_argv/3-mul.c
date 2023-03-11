#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiplies 2 numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: returns the product of 2 numbers
 *
 **/

int main(int argc, char *argv[])
{
	int x, y;
	int product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;
	printf("%d\n", product);
	return (0);
}
