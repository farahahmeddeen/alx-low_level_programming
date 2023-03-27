#include "main.h"
/**
 * rev_string - function that prints a string
 *
 * @s: parameter
 *
 * Return: 0 always
 */

void rev_string(char *s)
{
	int i;
	int countt = 0;
	char rev = s[0];

	while (s[countt] != '\0')
		countt++;
	for (i = 0 ; i < countt ; i++)
	{
		countt--;
		rev = s[i];
		s[i] = s[countt];
		s[countt] = rev;
	}
}
