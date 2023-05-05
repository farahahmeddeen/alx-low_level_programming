#include "main.h"
/**
 * clear_bit - sets the value of a bit
 *
 * @n: pointer
 * @index: index
 *
 * Return: 1 and -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int fa = 1;
	unsigned int j;

	if (index > 63)
		return (-1);
	for (j = 0; j < index; j++)
	{
		fa = fa * 2;
	}
	if ((*n >> index) & 1)
		*n -= fa;
	return (1);
}
