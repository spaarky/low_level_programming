#include <stdio.h>

/**
 * main - print 0 to 9
 *
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
