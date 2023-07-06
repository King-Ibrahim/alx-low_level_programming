#include "main.h"

/**
 * get_endianness - This function checks the endianness.
 * Return: returns 0 if big endian
 * returns 1 if small endian
 *
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}
