#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * num_checker - This function checks for a numerical input
 * @c: The input
 * Return: return 1 if number, if letter return -1
 *
 **/

int isnumber(char *c)
{
	int i = 0;
	int number = 0;
	int length = strlen(c);
	
	while (i < length)
	{
		if (c[i] < '0' || c[i] > '9')
		{
			return (-1);
		}
		else
			number = number * 10 + (c[i] - '0');
		i++;
	}
	return (number);
}

/**
 * main - This program adds two positive numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: returns the sum
 *
 **/
 
int main(int argc, char *argv[])
{
	int i, number;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		number = number(argv[i]);
		if (number == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
