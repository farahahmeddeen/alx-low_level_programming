#include "main.h"
/**
 * leet - function that changes letter to numbers
 *
 * @y: pointer
 *
 * Return: return to y
 */

char *leet(char *y)
{
	int i;
	int j;

	char *first = "aAeEoOtTlL";
	char *second = "4433007711";

	for (i = 0 ; y[i] != '\0' ; i++)
	{
		for (j = 0 ; first[j] != '\0'; j++)
		{
			if (y[i] == first[j])
				y[i] = second[j];
		}
	}
	return (y);
}
