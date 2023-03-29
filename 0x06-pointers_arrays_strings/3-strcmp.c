#include "main.h"
/**
 * _strcmp - function that compare two strings
 * @s1: pointer to destination
 * @s2: pointer to source
 * Return: return res
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	for (i = 0 ; s1[i] == s2[i] && s1[i] != '\0' ; i++)
		i++;
	res = s1[i] - s2[i];
	return (res);
}
