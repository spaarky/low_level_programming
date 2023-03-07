#include "main.h"

/**
 * _puts - print a string
 * @str: variable with the string in it
 *
 * Return: always 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
