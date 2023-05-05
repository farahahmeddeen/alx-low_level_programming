#include "main.h"
/**
 * get_bit - returns value of a bit
 *
 * @n: number
 * @index: index
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int fa;

	if (index > 64)
		return (-1);
	fa = (n >> index) & 1;
	return (fa);
}
