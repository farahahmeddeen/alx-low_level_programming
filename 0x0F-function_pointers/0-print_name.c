#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: name element
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
