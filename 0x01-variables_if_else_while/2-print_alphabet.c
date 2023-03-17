#include <stdio.h>
/**
 * main -  writing a  program using putchar function
 * Return: 0 (success)
 */
int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
