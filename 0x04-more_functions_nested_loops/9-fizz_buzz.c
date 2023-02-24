#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * if number is divisible by 3 main prints fizz
 * if number is divisible by 5 main prints buzz
 * if number is divisible by 3 and 5 main prints fizzbizz
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
        	if (i % 3 == 0)
			printf("%s ", fizz);
        	else if (i % 5 == 0)
			printf("%s ", buzz);
        	else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fizzbuzz);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
