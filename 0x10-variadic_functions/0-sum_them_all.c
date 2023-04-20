#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all  - function to print sum of all parameters
 *
 * @n: number of parameters
 *
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list fa;
	unsigned int i;
	int sum = 0;

	va_start(fa, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n ; i++)
	{
		sum += va_arg(fa, unsigned int);
	}
	va_end(fa);
	return (sum);
}
