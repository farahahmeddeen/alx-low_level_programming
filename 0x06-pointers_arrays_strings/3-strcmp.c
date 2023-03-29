#include "main.h"
/**
 * _strcmp - function that compare two strings
 * @s1: pointer to destination
 * @s2: pointer to source
 * Return: return res
 */

int _strcmp(char *s1, char *s2)
{
	int res, count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
		count++;
	res = s1[count] - s2[count];
	return (res);
}
