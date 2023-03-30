#include "main.h"
/**
 * string_toupper - function that converst lowercase to upper
 * @y: pointer to string
 * Return: char
 */

char *string_toupper(char *y)
{
	int count;

	count = 0;
	while (y[count] != '\0')
	{
		if (y[count] >= 97 && y[count] <= 122)
		{
			y[count] = y[count] - 32;
		}
		count++;
	}
	return (y);
}
