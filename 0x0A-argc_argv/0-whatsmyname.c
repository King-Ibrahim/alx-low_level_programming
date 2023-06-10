#include <main.h>
#include <stdio.h>

/**
 * main -  This function writes its own name
 * @argc: arguement count
 * @argv: arguement vector
 * Return: returns 0.
 *
 **/

int main(int argc, char *argv[])
{
	argv = argc;
	printf("%s\n", *argv);
	return (0);
}
