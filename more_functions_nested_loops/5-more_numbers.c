#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 1234567891011121314\n 10 times
 */

void more_numbers(void)
{
	int c;
	int n;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
