#include <stdio.h>

/**
 * main - This program prints all the arguements it receives.
 * @argc: arguement count
 * @argv: arguement vector
 * Return: returns 0.
 *
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
