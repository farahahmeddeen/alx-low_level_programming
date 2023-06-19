#include "main.h"
/**
 * _memcpy - function that copies n byte from src to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes
 * Return: to destination memory dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0 ; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
