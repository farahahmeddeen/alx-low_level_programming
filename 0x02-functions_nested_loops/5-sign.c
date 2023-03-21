#include "main.h"
/**
 * print_sign - function that prints sign of a number
 *
 * @n: parameter
 *
 * Return: 1 if its greater, 0 if its equal and -1 if its less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
