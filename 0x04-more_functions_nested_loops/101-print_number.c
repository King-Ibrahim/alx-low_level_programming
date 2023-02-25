#include "main.h"

/**
 * print_number - print an int numbers.
 * @n: the number to be printed
 * Return: Always 0.
 *
 */
 
void print_number(int n)
{
    	unsigned int tempval, numberchar, number;
	int i, j, digit, digits, power;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		tempval = -n;
	}
	else
	{
		tempval = n;
	}
	number = tempval;
    	while (i < digits)
	{
		power = power * 10;
		i++;
	}
	j = power;
	while (j >= 1)
	{
		numberchar = (tempval / j) % 10;
		_putchar(numberchar + '0');
		j = j / 10;
	}
	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	i = 1;	
}
