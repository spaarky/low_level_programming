#include <stdio.h>

/**
 *
 *
 */

int main(void)
{
	int count;
	unsigned long int prev = 0;
	unsigned long int curr = 1;
	unsigned long int sum;

	for (count = 0; count < 98; count++)
	{
		sum = prev + curr;
		printf("%lu", sum);

		prev = curr;
		curr = sum;

		if (count == 97)
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
