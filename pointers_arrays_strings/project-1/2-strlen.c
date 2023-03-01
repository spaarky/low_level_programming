#include "main.h"

/**
 * _strlen - give the lengh of a string
 * @s: the string
 *
 * Return: the lengh of s
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
