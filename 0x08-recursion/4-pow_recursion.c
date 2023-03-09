#include "main.h"

/**
 * _pow_recursion - This function raises x to the power of y
 * @x: the base integer
 * @y: the exponent
 * Return: returns the value of x raised to the power of y.
 * Anything to the power of zero is 1
 * returns -1 if y is less than 0
 */
 
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
