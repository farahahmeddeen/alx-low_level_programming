#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that copies a string after allocating space
 *
 * @str: char argument
 *
 * Return: 0 always
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int z = 0;
	char *fa;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	fa = malloc(sizeof(char) * (i + 1));
	if (fa == NULL)
		return (NULL);
	for (z = 0; str[z]; z++)
		fa[z] = str[z];
	return (fa);
}
