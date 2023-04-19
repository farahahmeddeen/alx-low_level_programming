#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: an array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	return (-1);
}
