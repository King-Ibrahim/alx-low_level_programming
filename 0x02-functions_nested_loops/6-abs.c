#include "main.h"

/**
 * _abs - This function computes the absolute value of an integer
 * @ab: numerical input
 * Return: absolute value of ab
 *
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
