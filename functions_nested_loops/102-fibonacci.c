#include <stdio.h>

/**
 * main - print
 *
 * Return: always 0
 */

int main(void)
{
	int count;
	unsigned long int prev = 0;
	unsigned long int curr = 1;
	unsigned long int sum;

	for (count = 0; count < 50; count++)
	{
		sum = prev + curr;
		printf("%lu", sum);

		prev = curr;
		curr = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
