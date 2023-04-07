#include "main.h"
#include <string.h>
/**
 * *_strcat - function that concatenates a string.
 *
 * @dest: parameter
 * @src: parameter
 *
 * Return: 0 always
 */

char *_strcat(char *dest, char *src)
{
	int count;
	int i;

	for (count = 0 ; dest[count] != '\0' ; count++)
	{
		count++;
	}
	for (i = 0; src[i] != '\0'; i++, count++)
	{
		dest[count] = src[i];
	}
	dest[count] = '\0';
	return (dest);
}
