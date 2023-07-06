#include "main.h"

/**
 * binary_to_uint - This function  converts a binary number
 * to an unsigned interger.
 * @b: the  binary.
 * Return: unsigned int.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int length;

	if (b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		num += (b[length] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
