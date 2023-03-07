#include "main.h"

/**
 * _islower - function that check if the character is in lowercase
 * @c: the character being checked
 *
 * Return: 1 if lowercase and 0 if else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
