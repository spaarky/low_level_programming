#include "main.h"

/**
 * _isalpha - function that check if the character is a letter
 * @c: the character being ckecked
 *
 * Return: 1 if a letter 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
