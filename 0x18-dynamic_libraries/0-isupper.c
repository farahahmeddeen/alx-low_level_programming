#include "main.h"
/**
 * _isupper - function that checks if a number is uppercase
 *
 * @c: parameter
 *
 * Return: 1 if its upper and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
