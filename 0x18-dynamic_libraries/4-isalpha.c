#include "main.h"
/**
 * _isalpha - function that checks if its alphabet or not
 *
 * @c: parameter to be placed
 *
 * Return: 1 if its an alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
