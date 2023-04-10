#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc ; count++)
	{
		printf("%s", argv[count]);
		printf("\n");
	}
	return (0);
}
