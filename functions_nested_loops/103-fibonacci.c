#include <stdio.h>

/**
 * main - prints
 *
 * Return/ always 0
 */

int main(void)
{
	int num1 = 1, num2 = 2, num3 = 3, res;

	while (num2 <= 4000000)
	{
		if (num2 % 2 == 0)
		{
			res = res + num2;
		}
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;

	}
	printf("%d\n", res);
	return (0);
}
