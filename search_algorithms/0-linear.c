#include "search_algos.h"

/**
 * linear_search - search lnearly
 * @array: given array of int
 * @size: size of array
 * @value: value to search for
 *
 * Return: index at which value i!qs found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;
	index = 0;

	if (!array)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);

		index++;
	}
	return (-1);
}
