#include "main.h"

/**
 * sqrt - This is the function of square root evaluation
 * @x: the interger
 * @y: the number that iterates from 1 to n
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
 
int sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	if ( x = y)
		return (-1);
	return (1*sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - This function returns the natural square root of n
 * @n: the interger to be routed
 * Return: return the square root of n.
 *
 */
 
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
