#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - function that prints numbers
 *
 * @separator: string printed between lines
 * @n: number of oparators
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list fa;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(fa, n);
	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(fa, unsigned int));
		if (i != n - 1)
			printf("%c ", *separator);
	}
	va_end(fa);
	printf("\n");
}
