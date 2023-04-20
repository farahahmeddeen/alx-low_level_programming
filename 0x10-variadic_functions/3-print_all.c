#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 *
 * @format: arguments to be passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list fa;
	char *s;
	char *sep = "";

	va_start(fa, format);
	while (format[i] && format)
	{
		if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(fa, int));
			sep = ", ";
		}
		else if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(fa, int));
			sep = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(fa, double));
			sep = ", ";
		}
		else if (format[i] == 's')
		{
			s = va_arg(fa, char*);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
			sep = ", ";
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}
	printf("\n");
	va_end(fa);
}
