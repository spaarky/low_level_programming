#include <stdio.h>

/**
 * main - print
 *
 * Return: always 0
 */

int main(void)
{
	int num, sum;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0)
		{
			sum = sum + num;
		}
		else if (num % 5 == 0)
		{
			sum = sum + num;
		}
	}
	printf("%i\n", sum);
	return (0);
}
