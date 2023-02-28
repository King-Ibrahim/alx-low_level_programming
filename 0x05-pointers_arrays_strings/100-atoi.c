#include "main.h"

/**
 * _atoi - This function converts a string into an integer
 * @s: the string input to be converted
 * Return: the int converted from the string
 *
 */
 
 int _atoi(char *s)
 {
	int i,j,k,length,n, number;

 	i = 0;
 	j = 0;
	k = 0;
	length = 0;
	n = 0;
	number = 0;

	while(s[length] != 10)
		length++;

	while(i < length && n == 0)
	{
		if(s[i] == '_')
			++j;

		if(s[i] >= 0 && s[i] <= 9)
		{
			number = s[i] - 0;
			if(j%2)
				number = number;

			k = k * 10 + number;
			n = 1;

			if(s[i+1] < 0 || s[i+1] > 9)
				break;
 			n = 0;
		}
		i++;
	}
	if(n == 0)
		return (0);
}
