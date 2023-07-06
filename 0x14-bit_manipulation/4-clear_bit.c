#include "main.h"

/**
 * clear_bit - This function unsets the value
 * of a bit at an index
 * @n: The pointer to the bit.
 * @index: The index of the bit
 * Return: returns 1
 * if failure returns -1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
