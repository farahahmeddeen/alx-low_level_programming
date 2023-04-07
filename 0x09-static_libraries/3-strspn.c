#include "main.h"
/**
 * _strspn -  function that prints the length of a prefix string
 * @s: initial segment
 * @accept: consits of bytes from accept
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0 ; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					count++;
				}
			}
		}
		else
			return (count);
	}
	return (count);
}
