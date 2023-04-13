#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Null if function fails
 */

int *array_range(int min, int max)
{
	int *fa;
	int i;

	if (min > max)
		return (NULL);
	fa = malloc(sizeof(int) * (max - min + 1));

	if (fa == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
	{
		fa[i] = min;
	}
	return (fa);
}
