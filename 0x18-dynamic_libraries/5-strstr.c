#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to search
 * @needle: first occurence
 *
 * Return: a pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int k = 0, m = 0;

	while (haystack[k])
	{
		while (needle[m] && (haystack[k] == needle[0]))
		{
			if (haystack[k + m] == needle[m])
				m++;
			else
				break;
		}
		if (needle[m])
		{
			k++;
			m = 0;
		}
		else
			return (haystack + k);
	}
	return (0);
}
