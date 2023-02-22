#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
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
    print_alphabet_x10();
    return (0);
}
