#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diags in a matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diag_sum_1 = 0;
	int diag_sum_2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diag_sum_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diag_sum_2 += a[i];
	}
	printf("%d, %d\n", diag_sum_1, diag_sum_2);
}
