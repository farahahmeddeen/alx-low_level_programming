#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: pointer to start
 * @size: size of the matrix
 * Return: vois
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k;
	int m;
	int n;

	for (m = 0; m < size ; m++)
	{
		k = (m * size) + m;
		i += *(a + k);
	}
	for (n = 0; n < size ; n++)
	{
		k = (n * size) + (size - 1 - n);
		j += *(a + k);
	}
	printf("%i, %i\n", i, j);
}
