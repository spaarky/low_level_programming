#include <stdio.h>

/**
 * main - prints alphabet but don't print 'q' et 'e'
 *
 * Return: always 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			a++;
		}
		putchar(a);
	}
	putchar('\n')
	return (0);
}
