#include "lists.h"
/**
 * print_list - prints all the elements
 *
 * @h: pointer
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t fa;

	fa = 0;

	for (; h != NULL; h = h->next, fa++)
	{
		if (h->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return (fa);
}
