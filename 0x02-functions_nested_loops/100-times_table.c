#include "main.h"
/**
 * print_times_table - function that creates an n timetable
 *
 * @n: parameter
 *
 * Return: 0 (successs)
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;
		int j;
		int k;

		for (i = 0 ; i <= n ; i++)
		{
			_putchar('0');
			for (j = 0 ; j <= n ; j++)
			{
				_putchar(',');
				_putchar(' ');
				k = i * j;
				_putchar(k);
			}
		}
	}
}
