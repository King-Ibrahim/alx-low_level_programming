#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - This is the main function
 * @argc: the parameters
 * @argv: the pointer to the parameters
 * Return: returns 0
 *
 */

int main(int argc, char *argv[])
{
	int input1, input2, result;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	input1 = atoi(argv[1]);
	input2 = atoi(argv[3]);
	get_op = argv[2];

	/* added edge case if argv[2] was longer than 1 char*/
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	result = res(input1, input2);

	printf("%d\n", result);
	return (0);
}
