#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char l;
	int c = 0;

	while (c <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		c++;
	}
}
