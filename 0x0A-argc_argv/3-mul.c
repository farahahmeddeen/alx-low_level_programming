#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if argument is less than 3 and 0 otherwise
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
        {
                printf("Error\n");
                return (1);
        }
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mul);
		printf("\n");
	}
	return (0);
}
