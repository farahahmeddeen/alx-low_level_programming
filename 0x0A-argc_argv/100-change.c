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
	int f;
	int sum = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (f = 0; f < 5 ; f++)
	{
		sum = sum + (num / *(coins + f));
		num = num % *(coins + f);
	}
	printf("%d\n", sum);
	return (0);
}
