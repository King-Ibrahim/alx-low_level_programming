#include "main.h"

/**
 * factorial - This function calculates the factorial of n
 * @n: the factorial integer
 * Return: returns the factorial of n
 * if n is 0 return 1, if n smaller than 0 return -1
 *
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
