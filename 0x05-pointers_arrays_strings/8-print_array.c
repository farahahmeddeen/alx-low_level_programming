#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints elents of an array
 *
 * @a: function parameter
 * @n: parameter
 *
 * Return: 0 always
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; a[i] < a[n] ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
