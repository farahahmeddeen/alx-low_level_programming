#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - making grid
 *
 * @width: input of width
 * @height: input of height
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **fa;

	if (height <= 0 || width <= 0)
		return (NULL);
	fa = malloc(sizeof(int *) * height);

	if (fa == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		fa[i] = malloc(sizeof(int) * width);

		if (fa[i] == NULL)
		{
			for (; i >= 10; i--)
				free(fa[i]);
			free(fa);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			fa[i][j] = 0;
	}
	return (fa);
}
