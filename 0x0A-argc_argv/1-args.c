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

int main(int argc, __attribute__((unused))char *argv[])
{
	if (argc == 1)
	{
		printf("%d", argc - 1);
		printf("\n");
	}
	else
	{
		printf("%d", argc - 1);
		printf("\n");
	}
	return (0);
}
