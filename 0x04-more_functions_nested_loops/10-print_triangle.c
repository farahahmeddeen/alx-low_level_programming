#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: parameter
 *
 * Return: 0 always
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
			{
				_putchar(' ');
			}
			for (j = 1 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
