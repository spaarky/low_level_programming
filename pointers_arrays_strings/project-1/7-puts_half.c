#include "main.h"

/**
 * _strlen - prints
 * @s: variable
 *
 * Return: 0
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
 * puts_half - prints
 * @str: string
 */

void puts_half(char *str)
{
	int id, lengh = _strlen(str);

	if (lengh % 2 != 0)
		id = lengh / 2 + 1;
	else
		id = lengh / 2;
	while (id < lengh)
	{
		_putchar(*(str + id));
		id++;
	}
	_putchar('\n');
}
