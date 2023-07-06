#include "main.h"

/**
 * binary_to_uint - This function  converts a binary number
 * to an unsigned interger.
 * @b: the  binary.
 * Return: unsigned int.
 *
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int unint;
	int base_two, length;

	if (!b)
		return (0);

	unint = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			ui += base_two;
		}
	}

	return (unint);
}
