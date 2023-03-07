#include "main.h"

/**
 * _strspn - return length of string that matches values
 * @s: search
 * @accept: target
 *
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b;
	int matches = 0;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				matches++;
				break;
			}
			if (accept[b + 1] == '\0' && s[a] != accept[b])
				return (matches);

		}
		a++;
	}
	return (matches);
}
