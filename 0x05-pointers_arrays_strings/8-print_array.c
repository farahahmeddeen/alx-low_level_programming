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
	int v;

	v = 0;
	while (n > 0)
	{
		printf("%d", a[v]);
		n--;
		if (n > 0)
		{
			printf(", ");
		}
		v++;
	}
	printf("\n");
}
