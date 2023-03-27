#include "main.h"
/**
 * puts2 - function that every other character
 *
 * @str: parameter
 *
 * Return: print every other character
 */

void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
	{
		_putchar (str[o]);
	}
	}
	_putchar('\n');
}
