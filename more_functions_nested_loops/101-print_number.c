#include "main.h"

/**
 * print_number - print a number using putchar
 */

void print_number(int n)
{
	unsigned int counter, digit, positive_n = n;
	double order_of_10 = 1;

	if (n == 0)
		_putchar('0');

	else
	{

		if (n < 0)
		{
			positive_n = -n;
			_putchar('-');
		}
		while (order_of_10 <= positive_n)
			order_of_10 *= 10;

		counter = order_of_10 / 10;

		while (counter >= 1)
		{
			digit = positive_n / counter;
			_putchar(digit + '0');
			positive_n = (positive_n - (counter * digit));
			counter /= 10;
		}
	}
}
