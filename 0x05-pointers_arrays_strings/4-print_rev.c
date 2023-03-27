#include "main.h"
/**
 * print_rev - function that prints string in reverse
 *
 * @s: parameter argument
 *
 * Return: 0 always
 */

void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (i = count ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
