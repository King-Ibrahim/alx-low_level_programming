#include "main.h"
		

		
/**		
 * isalpha - Tests if a character is alpha.
 * @c - the character being tested	
 * Return: if alpha is true return 1, else return 0.
 * 	
 */

    int _isalpha(int  c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

