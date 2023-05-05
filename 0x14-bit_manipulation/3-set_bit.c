#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 *
 * @n: pointer
 * @index: index
 *
 * Return: 1 and -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int fa = 1;

	if (index > 63)
		return (-1);
	for (; index > 0; index--)
	{
		fa <<= 1;
	}
	*n |= fa;
	return (1);
}
