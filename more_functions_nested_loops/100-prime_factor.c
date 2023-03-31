#include <stdio.h>

/**
 * main - print largest prime number of 612852475143
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long divisor = 2;

	while (divisor < number)
	{
		if (number % divisor == 0)
		{
			number /= divisor;
			divisor = 2;
		}
		else
			divisor++;
	}
	printf("%lu\n", number);
	return (0);
}
