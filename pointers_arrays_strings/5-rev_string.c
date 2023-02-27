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
		lengh++
	}
	return (lengh);
}

/**
 * rev_string - reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	int a = 0, b = (_strlen(s) - 1);
	char tmp;

	while (a < b)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
		a++, b--;
	}
}
