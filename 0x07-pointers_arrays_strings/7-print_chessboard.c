#include "main.h"

/**
* print_chessboard - This function prints a chessboard
* @a: the char array
* Return: void
*
*/

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(&a[i][j]);
		}
		_putchar('\n');
		i++;
}
