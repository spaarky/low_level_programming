#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 *
 *
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
