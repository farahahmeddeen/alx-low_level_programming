#include <stdio.h>
/**
 * main - a program that prints alphabets except q and e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	return (0);
}
