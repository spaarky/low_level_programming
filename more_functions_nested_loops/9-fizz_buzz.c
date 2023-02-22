#include <stdio.h>

/**
 * main - prints number from 1 to 100
 * 
 * Fizz: replace the number if it is [3]
 *
 * Buzz: replace the number if it is [5]
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", n);
		}
		if (n < 100) 
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
