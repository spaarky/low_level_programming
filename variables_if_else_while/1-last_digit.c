#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 *
 *Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of");
	if (n % 10 > 5)
	{
		printf("%d is greater than 5\n", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("%d and is 0\n", n % 10);
	}
	else
		(n % 10 != 0 && n % 10 < 6);
	printf("%d is less than 6 and not 0\n", n % 10);
	return (0);
}
