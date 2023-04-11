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

	for (j = 0; j < size; j++)
		s[j] = c;
	return (s);
	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (0);
}
