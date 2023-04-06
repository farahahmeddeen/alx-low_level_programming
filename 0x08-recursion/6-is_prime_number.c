#include "main.h"
/**
 * is_prime_number_helper - helper function
 *
 * @n: value to be given
 * @y: value increment
 *
 * Return: if the number is prime or not
 */

int is_prime_number_helper(int n, int y)
{
	if (n <= 1)
		return (0);
	else if (n % y == 0)
		return (0);
	else if (y * y <= n)
		return(is_prime_number_helper(n, y + 1));
	else
		return (1);
}
/**
 * is_prime_number - function to check if its prime number
 *
 * @n: value to be given
 *
 * Return: 1 if its prime or 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
