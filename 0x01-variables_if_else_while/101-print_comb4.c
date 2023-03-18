#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int z;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (z = 2 ; z < 10 ; z++)
			{
				if (i < j && j < z)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(z + '0');
					if (i + j + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
