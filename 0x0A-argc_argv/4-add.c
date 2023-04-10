#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if number is not a digit and 0 otherwise
 */

int main(int argc, char *argv[])
{
	int f;
	int h;
	int sum = 0;

	for (f = 1; f < argc; f++)
	{
		for (h = 0; argv[f][h] != '\0'; h++)
		{
			if (!isdigit(argv[f][h]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[f]);
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
