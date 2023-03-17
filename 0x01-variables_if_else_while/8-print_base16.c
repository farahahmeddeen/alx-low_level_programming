#include <stdio.h>
/**
 * main - prints all the numbers of base sixteen in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char f;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (f = 'a'; f <= 'f'; f++)
		putchar(f);
	putchar('\n');
	return (0);
}

