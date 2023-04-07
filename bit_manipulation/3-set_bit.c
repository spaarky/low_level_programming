#include "main.h"

/**
 * set_bit - set bit to 1 at a given index
 * @n: number
 * @index: index in binary number
 *
 * Return: 1 if success,-1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maxBit, mask = 1;

	maxBit = (sizeof(unsigned long int) * 8);

	if (index > maxBit)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
