#include "main.h"
 
/**
* print_last_digit - This function prints the last digit of a number
* @ld: number's last digit result
* Return: value of the last digit
*
*/

int print_last_digit(int ld)
{
	int printld;

	printld = (ld % 10);

	if (printld < 0)
	{
		printld = (-1 * printld);
	}

	_putchar(printld + '0');
	return (printld);
}
