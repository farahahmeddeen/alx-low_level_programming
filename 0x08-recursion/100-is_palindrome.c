#include "main.h"
#include <string.h>
/**
 * is_palindrome_helper - function helper
 *
 * @s: string
 * @y: number of times
 *
 * Return: if its a palindrome
 */
int is_palindrome_helper(char *s, int y)
{
	int length;

	length = strlen(s);

	if (*s == '\0')
		return (1);
	else if (*s == s[length - y])
		return (is_palindrome_helper(s + 1, y + 1));
	else
		return (0);
}
/**
 * is_palindrome - function to check if its a palindrome
 *
 * @s: string
 *
 * Return: 1 if its true and 0 otherwise
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 1));
}
