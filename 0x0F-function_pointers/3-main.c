#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int r;
	char fa;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	fa = *argv[2];
	func = get_op_func(argv[2]);

	if ((fa == '/' || fa == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	r = func(i, j);
	printf("%d\n", r);
	return (0);
}
