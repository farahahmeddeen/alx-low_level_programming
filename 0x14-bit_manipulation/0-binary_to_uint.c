#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: points to string
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int fa = 0;
	int f = 0;

	if (b == 0)
		return (0);
	while (b[f] != '\0')
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		fa = 2 * fa + (b[f] - '0');
		f++;
	}
	return (fa);
}
