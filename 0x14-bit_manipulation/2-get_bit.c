#include "main.h"

/**
 * get_bit - This function gives the value of a bit
 * for a given index
 * @n: The bit.
 * @index: The index of the bit
 * Return: returns the bit value
 * otherwise returns -1 in the event of an error
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
