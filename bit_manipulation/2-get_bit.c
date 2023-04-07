#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index in binary number
 *
 * Return: 0 or 1 or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int maxBit;

	maxBit = (sizeof(unsigned long int) * 8);

	if (index > maxBit)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
