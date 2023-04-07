#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area pointed to bys
 * Return: to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0 ; y < n ; y++)
	{
		s[y] = b;
	}
	return (s);
}
