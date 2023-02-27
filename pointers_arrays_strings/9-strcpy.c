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

/**
 * _strcpy - copies the string pointed by src into dest
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strcpy (char *dest, char *src)
{
    int id = 0;

    for (; id <= _strlen (src); id++)
        dest[id] = src[id];

    return (dest);
}