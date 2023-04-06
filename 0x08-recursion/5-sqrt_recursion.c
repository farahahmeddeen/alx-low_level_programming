#include "main.h"
/**
 * _sqrt_recursion_helper - function that checks squareroot
 *
 * @n: value from previous code
 * @y: parameter to be incremented
 *
 * Return: the value
 */
int _sqrt_recursion_helper(int n, int y)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (y * y > n)
		return (-1);
	else if (y * y == n)
		return (y);
	else
		return (_sqrt_recursion_helper(n, y + 1));
}
/**
 * _sqrt_recursion - function that checks squareroot
 *
 * @n: parameter
 *
 * Return: the natural squareroot
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
