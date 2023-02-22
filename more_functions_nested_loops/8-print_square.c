#include "main.h"

/**
 * print_square - print a square made of #
 * @size: size of the square
 *
 */

void print_square(int size)
{
	int l;
	int c;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (l = 1; l <= size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
