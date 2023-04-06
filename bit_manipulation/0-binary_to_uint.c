#include "main.h"

/**
 * binary_to_uint - convert base2 to base10
 * @b: to convert
 * 
 * Return: the converted or 0
*/

unsigned int binary_to_uint(const char *b)
{
	int length = 0, index = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	while (b[length] != '\0')
		length++;

	length -= 1;

	while (b[index])
	{
		if ((b[index] != '0') && (b[index] != '1'))
			return (0);

		if (b[index] == '1')
			sum += (1 * (1 << length));

		index++;
		length--;
	}
	return (sum);
}
