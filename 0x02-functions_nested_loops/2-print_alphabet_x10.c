#include "main.h"

/**
 * 2-print_alphabet_x10.c - creates a function that prints the alphabet 10 times.
 *
 * Return:a-z 10x
 */
int main(void)
{	
	int n, count;

	count = 0;

	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		count++;
		_putchar('\n');
	}
    return (0);
}
