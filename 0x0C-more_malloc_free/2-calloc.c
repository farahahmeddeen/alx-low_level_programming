#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memeory for an array
 *
 * @nmemb: parameter
 * @size: size parameter
 *
 * Return: null if function fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *fa;

	if (nmemb == 0 || size == 0)
		return (NULL);
	fa = malloc(nmemb * size);
	if (fa == NULL)
		return (NULL);
	memset(fa, 0, nmemb * size);
	return (fa);
}
