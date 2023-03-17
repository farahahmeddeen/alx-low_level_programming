#include <stdio.h>
/**
 * main - a program that prints alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char f;

	for (f = 'z'; f >= 'a'; f--)
		putchar(f);
	putchar('\n');
	return (0);
}
