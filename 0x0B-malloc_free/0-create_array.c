#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array and initialize it
 * @c: assign to this char
 * @size: array size
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	s = malloc(sizeof(char) * size);
	if (s == NULL || size == 0)
		return (NULL);
	for (j = 0; j < size; j++)
		s[j] = c;
	return (s);
}
