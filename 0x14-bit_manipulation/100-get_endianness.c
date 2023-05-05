#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 and 0
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *fa = (char *) &z;

	if (*fa)
		return (1);
	else
		return (0);
}
