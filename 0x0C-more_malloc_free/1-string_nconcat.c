#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates a string
 *
 * @s1: first strinf
 * @s2: second string
 * @n: bytes
 *
 * Return: newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *fa;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int m;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	i = strlen(s1);
	j = strlen(s2);
	if (n > j)
		fa = malloc((i + j + 1) * sizeof(char));
	else
		fa = malloc((i + n + 1) * sizeof(char));
	if (fa == NULL)
		return (NULL);
	for (k = 0, m = 0; k < (i + n + 1); k++)
	{
		if (k < i)
			fa[k] = s1[k];
		else
			fa[k] = s2[m++];
	}
	if (n < j)
		fa[i + n] = '\0';
	else
		fa[i + j] = '\0';
	return (fa);

}
