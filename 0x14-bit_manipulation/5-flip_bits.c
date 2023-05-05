#include "main.h"
/**
 * flip_bits - returns number of bits
 *
 * @n: parameter
 * @m: parameter
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fa;
	int j;

	fa = n ^ m;
	for (j = 0; fa != 0; j++)
		fa = fa & (fa - 1);
	return (j);
}
