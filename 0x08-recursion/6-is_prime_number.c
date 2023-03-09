#include "main.h"

/**
 * prime2 - This function tests if a number is a prime number
 * @x: the interger
 * @y: the number that iterates from 1 to n
 * Return: return 1.
 *
 */

int primenum(int x, int y)
{
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (1*primenum(x+1,y));
}

/**
 * is_prime_number - This function checks if a number is prime
 * @n: the Integer being tested
 * Return: return 1 if number is prime number.
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenum(n, 2));
}
