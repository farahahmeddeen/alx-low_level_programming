#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @b:parameter
 *
 * Return: b if its more than 0
 */

int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
