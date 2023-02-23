#include "main.h"

/**
 * print_times_table - print times table from 0 to n
 * @n: a variable
 */

void print_times_table(int n)
{
	int row, column, product;

	if (n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = (row * column);

				if (column == 0)
					_putchar('0' + product);
				else if (product <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar(product % 100 / 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
