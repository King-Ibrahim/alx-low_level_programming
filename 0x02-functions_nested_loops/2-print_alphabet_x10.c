#include "main.h"

/**
 * 10 x alphabet - creates a function that prints the alphabet in lower case
 * Return:a-z 10x
 *
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
