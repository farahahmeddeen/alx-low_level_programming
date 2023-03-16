#include  <stdio.h>
/**
 * main-Entry point
 *
 * Description:'a program that prints the size of various types on the computer it is compiled and run on using printf'
 *
 * retun: 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int x;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}