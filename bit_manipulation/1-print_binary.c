#include "main.h"

/**
 * print_binary - converts int to binary
 * @n: unsigned int to convert
 *
 * Return: binary
*/

void print_binary(unsigned long int n)
{

	unsigned long int nCopy = n, mask = 1;
	int length = 0;

	while (nCopy > 0)
	{
		length++;
		nCopy >>= 1;
	}
	length -= 1;

	if (length > 0)
		mask = mask << length;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');

		else
			_putchar('0');

		mask >>= 1;
	}
}
