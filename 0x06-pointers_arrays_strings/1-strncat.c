#include "main.h"
/**
 * *_strncat - function that concatenates a string that will
 * use at most n bytes.
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes to concatenate
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count;
	int i;

	for (count = 0 ; dest[count] != '\0' ; count++)
	{
		count++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++, count++)
	{
		dest[count] = src[i];
	}
	dest[count] = '\0';
	return (dest);
}
