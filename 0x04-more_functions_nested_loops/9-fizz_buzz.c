#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * if number is divisible by 3 main prints fizz
 * if number is divisible by 5 main prints buzz
 * if number is divisible by 3 and 5 main prints fizzbizz
 * Description: prints FizzBuzz
 * Return: void
 *
 */

int main(void)
{
        int i;

        for (i = 1; i <= 100; i++)
        {
                if ((i % 3 == 0) && (i % 5 == 0))
                        printf("FizzBuzz");
                else if (i % 3 == 0)
                        printf("Fizz");
                else if (i % 5 == 0)
                        printf("Buzz");
                else
                        printf("%i", i);

                if(i<100)
                        printf(" ");
                else
                        printf("\n");
        }
        return (0);
}
