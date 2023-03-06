#include "main.h"

/**
 * factorial - calculate a factorial
 * @n: the factorial
 *
 * Return: the value of fact
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
