#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: iterate over this array
 * @action: pointer to the function
 * @size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size ; j++)
		action(array[j]);
}
