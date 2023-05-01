#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints elements
 *
 * @h: linked list
 *
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t fa;

	fa = 0;
	while (h)
	{
		printf("%d\n", h->n);
		fa++;
		h = h->next;
	}
	return (fa);
}
