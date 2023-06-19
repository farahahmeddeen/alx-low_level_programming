#include "main.h"
/**
 * char *_strcpy - function that copies a string
 *
 * @dest: parameter
 * @src: parameter
 *
 * Return: 0 always
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int y = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (y = 0; y < i; y++)
	{
		dest[y] = src[y];
	}
	dest[i] = '\0';
	return (dest);
}
