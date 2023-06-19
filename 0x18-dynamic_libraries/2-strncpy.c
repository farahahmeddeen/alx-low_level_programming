#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: maximum number of bytes to copy
 * Return: to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int copies;

	for (copies = 0 ; copies < n && src[copies] != '\0'; copies++)
		dest[copies] = src[copies];
	for (; copies < n ; copies++)
		dest[copies] = '\0';
	return (dest);
}
