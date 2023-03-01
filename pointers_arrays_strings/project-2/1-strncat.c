#include "main.h"

/**
 * _strncat - concatenate a string into another to n bytes
 * @dest: string
 * @src: string
 * @n: number of bye(s)
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != src[n])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
