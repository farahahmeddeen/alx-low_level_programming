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
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
