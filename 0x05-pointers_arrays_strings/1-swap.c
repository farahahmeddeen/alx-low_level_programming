#include "main.h"
/**
 * swap_int - function that swaps value of integers
 *
 * @a: paramter
 * @b: parameter
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
