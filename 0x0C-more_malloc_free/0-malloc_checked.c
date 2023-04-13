#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 *
 * @b: parameter
 *
 * Return: 98 if function fails
 */

void *malloc_checked(unsigned int b)
{
	void *fa;

	fa = malloc(b);

	if (fa == NULL)
		exit(98);
	return (fa);
}
