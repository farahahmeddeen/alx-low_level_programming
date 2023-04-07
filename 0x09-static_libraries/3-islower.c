#include "main.h"
/**
 * _islower - function that checks if a number is lower.
 *
 *@c: parameter to be printed
 * Return: 0 if upper and 0 if lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
