#include "main.h"

/**
 * leet - encode string into 1337 leet
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int letter[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int number[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; letter[b] != '\0'; b++)
		{
			if (s[a] == letter[b])
				s[a] = number[b];
		}
	}
	return (s);
}
