#include "main.h"
#define NULL 0

/**
 * _strpbrk - return pointer to byte in s that matches byte in accept
 * @s: to search
 * @accept: target match
 *
 * Return: pointer to index of first match
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s = &s[a];
				return (s);
			}
		}
		a++;
	}
	return (NULL);
}
