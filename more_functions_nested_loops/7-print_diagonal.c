#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print
 * @n: size
 */

void print_diagonal(int n)
{
	int s, e;

	if (n > 0)
	{
		for (s = 1; s <= n; s++)
		{
			for (e = 1; e < s; e++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
