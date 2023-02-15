#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful\" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error
 *
 * Return: always 1
 */
int main(void)
{
	write("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
