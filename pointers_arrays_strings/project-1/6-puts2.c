#include "main.h"

/**
 * _strlen - give the lengh of a string
 * @s: the string
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int lengh = 0;

	for (; *s != '\0'; s++)
	{
		lengh++;
	}
	return (lengh);
}

/**
 * puts2 - give 1 char every 2
 * @str: list of char
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0' && a < _strlen(str); a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
