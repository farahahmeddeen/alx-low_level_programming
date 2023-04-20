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
	char *sep;

	sep = "";
	va_start(fa, format);
	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep,  va_arg(fa, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(fa, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(fa, double));
				break;
			case 's':
				s = va_arg(fa, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	va_end(fa);
	printf("\n");
}
