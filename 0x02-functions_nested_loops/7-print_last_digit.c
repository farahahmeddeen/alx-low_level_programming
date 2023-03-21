#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @b: parameter
 *
 * Return: 0 (success)
 */

int print_last_digit(int b)
{
	int j;

	j  = b % 10;
	if (j < 0)
		j = -(j);
	_putchar(j + '0');
	return (j);
}
