#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function to print a string
 *
 * @separator: string printed between the string
 * @n: number of string passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list fa;

	va_start(fa, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(fa, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(fa);
	printf("\n");
}
