#include "main.h"
/**
 * _isdigit - function to check if its a digit
 *
 * @c: parameter
 *
 * Return: 1 if its a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
