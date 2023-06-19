#include <stdio.h>

/**
 * main - This program  prints the name of the file it is run in
 * Return: returns the file name is printed
 *
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
